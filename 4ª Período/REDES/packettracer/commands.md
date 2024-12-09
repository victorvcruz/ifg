- [Comando de configuração de terminais no Packet Tracer](#comando-de-configuração-de-terminais-no-packet-tracer)
  - [Configuração de PCs](#configuração-de-pcs)
  - [Configuração de Roteadores](#configuração-de-roteadores)
    - [Configuração de interfaces](#configuração-de-interfaces)
    - [Configuração de roteamento](#configuração-de-roteamento)
      - [Roteamento estático](#roteamento-estático)


## Comando de configuração de terminais no Packet Tracer

### Configuração de PCs

Na aba Desktop, clique em IP Configuration. Configure o IP, máscara de sub-rede do PC e o Default Gateway que é o IP do roteador que está conectado ao PC.

### Configuração de Roteadores

#### Configuração de interfaces

Clique no roteador e vá em CLI. Digite os comandos
- `no` para limpar a configuração atual
- `enable` para entrar no modo privilegiado
- `configure terminal` para entrar no modo de configuração global
- `interface <nome da interface>` para configurar o IP de uma interface
    - `interface FastEthernet0/0` para configurar o IP da interface FastEthernet0/0
- `ip address <IP> <máscara de sub-rede>` para configurar o IP de uma interface
    - `ip address 192.168.1.10 255.255.255.0` para configurar o IP
- `no shutdown` para ativar a interface
- `exit` para sair do modo de configuração de interface

Caso haja conexão de PCs com IPs diferentes, é necessário configurar duas interfaces no roteador, uma para cada rede. Como, `FastEthernet0/0` e `FastEthernet0/1`.

Caso queira configurar a interface serial, siga os mesmos passos, mas substitua `FastEthernet0/0` por `Serial0/0`. 

#### Configuração de roteamento

##### Roteamento estático

Para configurar o roteamento estático, digite os comandos:

- `enable` para entrar no modo privilegiado
- `configure terminal` para entrar no modo de configuração global
- `ip route <rede de destino> <máscara de sub-rede>` para configurar o roteamento estático
    - `ip route 10.0.0.0 255.255.255.0 172.16.1.2` para configurar o roteamento estático
- `exit` para sair do modo de configuração global



