# Revisão Prova 2

## VLSM (Máscara de Sub-Rede de Tamanho Variável)

### Tabela de Sub-redes Mascára Variável - VLSM

| /   | MASK       | MASK 10         | Rede | Host |
|-----|------------|-----------------|------|------|
| /21 | 11110.0000 | 255.255.248.0   | 8    | 2048 |
| /22 | 11111.0000 | 255.255.252.0   | 4    | 1024 |
| /23 | 11111.1000 | 255.255.254.0   | 2    | 512  |
| /24 | 00000.0000 | 255.255.255.0   | 1    | 256  |
| /25 | 10000.0000 | 255.255.255.128 | 2    | 128  |
| /26 | 11000.0000 | 255.255.255.192 | 4    | 64   |
| /27 | 11100.0000 | 255.255.255.224 | 8    | 32   |
| /28 | 11110.0000 | 255.255.255.240 | 16   | 16   |
| /29 | 11111.0000 | 255.255.255.248 | 32   | 8    |
| /30 | 11111.1000 | 255.255.255.252 | 64   | 4    |
| /31 | 11111.1100 | 255.255.255.254 | 128  | 2    |
| /32 | 11111.1110 | 255.255.255.255 | 256  | 1    |

### Bits utilizados para a máscara de sub-rede

| Decimal | Binário  |
|---------|----------|
| 255     | 11111111 |
| 254     | 11111110 |
| 252     | 11111100 |
| 248     | 11111000 |
| 240     | 11110000 |
| 224     | 11100000 |
| 192     | 11000000 |
| 128     | 10000000 |
| 0       | 00000000 |

Ou seja, para uma máscara de sub-rede de 255.255.255.252 temos os bits `11111111.11111111.11111111.11111100`. Por padrão, temos 32 bits para o endereço IP, os bits 1 na máscara representam os bits de rede/sub-rede, enquanto os bits 0 representam os bits de host. Portanto, para a máscara de sub-rede temos 30 bits para a rede e 2 bits para o host.

Descobrimos o número de Sub-redes a partir da fórmula `2^s`, onde `s` é o número de bits adicionais para sub-rede, ou seja, `s = 32 - n`, onde `n` é o número de bits da máscara padrão da Classe C (24 bits). 

Ou seja, para a máscara de sub-rede de 255.255.255.252 `11111111.11111111.11111111.11111100`, assim temos 30 bits para a rede e 2 bits para o host. Portanto, temos `2^2 = 4` hosts por sub-rede e `2^30-24 = 2^6 = 64` sub-redes.

## Roteamento Estático

### Configuração de Roteamento Estático

```
Router(config)# ip route <rede_destino> <máscara> <próximo_salto>
```

Exemplo:

Se temos dois roteadores:

- R1 (interface FastEthernet/0: 192.168.1.1)
- R2 (interface FastEthernet/0: 192.168.1.2)
- A rede 192.168.2.0/24 está conectada ao R2

No R1, adicionamos a rota para essa rede via R2:
```
R1(config)# ip route 192.168.2.0 255.255.255.0 192.168.1.2
```

No R2, adicionamos a rota para a rede de R1:
```
R2(config)# ip route 192.168.1.0 255.255.255.0 192.168.1.1
```

## Roteamento OSPF

### Configuração de Roteamento OSPF

```
Router(config)# router ospf <process_id>
Router(config-router)# network <rede> <wildcard> area <area_id>
```

Exemplo:

Se temos dois roteadores:

- R1 (interface FastEthernet/0: 192.168.1.1)
- R2 (interface FastEthernet/0: 192.168.1.2)
- A rede 192.168.2.0/24 está conectada ao R2

No R1, configuramos o OSPF:
```
R1(config)# router ospf 1
R1(config-router)# network 192.168.1.0 0.0.0.255 area 0
```

No R2, configuramos o OSPF:
```
R2(config)# router ospf 1
R2(config-router)# network 192.168.1.0 0.0.0.255 area 0
R2(config-router)# network 192.168.2.0 0.0.0.255 area 0
```

## VLAN (Virtual Local Area Network)

### Configuração de VLAN

#### Criar VLAN:
```
Switch(config)# vlan <vlan_id>
Switch(config-vlan)# name <nome>
Switch(config-vlan)# exit
```

Exemplo:
```
Switch(config)# vlan 10
Switch(config-vlan)# name VENDAS
Switch(config-vlan)# exit
```

#### Atribuir porta à VLAN:
```
Switch(config)# interface <interface>
Switch(config-if)# switchport mode access
Switch(config-if)# switchport access vlan <vlan_id>
```

Exemplo:
```
Switch(config)# interface FastEthernet 0/1
Switch(config-if)# switchport mode access
Switch(config-if)# switchport access vlan 10
```

Também é possível atribuir range de portas à VLAN:
```
Switch(config)# interface range <interface_range>
Switch(config-if-range)# switchport mode access
Switch(config-if-range)# switchport access vlan <vlan_id>
```

Exemplo:
```
Switch(config)# interface range FastEthernet 0/1 - 24
Switch(config-if-range)# switchport mode access
Switch(config-if-range)# switchport access vlan 10
```

#### Dividindo a interface do roteador

Para dividir a interface do roteador em sub-interfaces, utilizamos o comando `encapsulation dot1Q <vlan_id>`.

```
Router(config)# interface <interface>
Router(config-if)# encapsulation dot1Q <vlan_id>
Router(config-if)# ip address <ip> <máscara>
```

Exemplo:
```
Router(config)# interface FastEthernet 0/0.10
Router(config-subif)# encapsulation dot1Q 10
Router(config-subif)# ip address ip address 192.168.0.1 255.255.255.0
```

#### Configurando uma porta trunk no switch

Uma interface que transmite os dados de todas as VLans é chamada de trunk. Para conseguirmos configurá-la temos que acessar o modo de configuração do switch.

```
Switch(config)# interface <interface>
Switch(config-if)# switchport mode trunk
```

Exemplo:
```
Switch(config)# interface FastEthernet 0/1
Switch(config-if)# switchport mode trunk
```

## ACL (Access Control List)

ACL (Access Control List) é uma lista de regras usada para controlar o tráfego de rede em roteadores e switches, permitindo ou negando pacotes com base em critérios como endereço IP, porta, e protocolo.

### Configuração de ACL

#### Criar uma ACL padrão:
```
Router(config)# access-list <numero> <permit|deny> <ip> <wildcard>
```

Se eu quisesse bloquear apenas um IP específico? Para bloquear somente o IP 192.168.1.10 acessando HTTP:
```
Router(config)# access-list 100 deny tcp host 192.168.1.10 any eq 80
```
(host significa que apenas esse IP será bloqueado.)

Se eu quisesse bloquear toda a rede 192.168.1.0.0/16? A wildcard mask 0.0.255.255 bloquearia 192.168.1.0 até 192.168.255.255:
```
Router(config)# access-list 100 deny tcp 192.168.0.0 0.0.255.255 any eq 80
```





