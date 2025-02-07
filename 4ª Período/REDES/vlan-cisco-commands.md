# Comandos VLAN

**Aluno:** Victor Hugo Vieira Cruz
**Matrícula:** 20231011090296

## Switch 1

```bash
Switch#enable
Switch#configure terminal
Switch(config)#interface FastEthernet0/1
Switch(config-if)#switchport mode access
Switch(config-if)#switchport access vlan 10
Switch(config-if)#exit
Switch(config)#interface FastEthernet0/2
Switch(config-if)#switchport mode access
Switch(config-if)#switchport access vlan 10
Switch(config-if)#exit
Switch(config)#interface FastEthernet0/3
Switch(config-if)#switchport mode access
Switch(config-if)#switchport access vlan 20
Switch(config-if)#exit
Switch(config)#interface FastEthernet0/4
Switch(config-if)#switchport mode access
Switch(config-if)#switchport access vlan 20
Switch(config-if)#exit
Switch(config)#interface FastEthernet0/6
Switch(config-if)#switchport mode trunk
Switch(config-if)#switchport trunk allowed vlan 10,20
Switch(config-if)#exit
Switch(config)#interface fastEthernet 0/5
Switch(config-if)#switchport mode trunk 
```

## Switch 2

```bash
Switch#enable
Switch#configure terminal
Switch(config)#interface fastEthernet 0/2
Switch(config-if)#switchport mode access 
Switch(config-if)#switchport access vlan 10
Switch(config)#interface fastEthernet 0/3
Switch(config-if)#switchport mode access 
Switch(config-if)#switchport access vlan 20
Switch(config)#interface fastEthernet 0/4
Switch(config-if)#switchport mode access 
Switch(config-if)#switchport access vlan 20
Switch(config-if)#exit
Switch(config)#interface fastEthernet 0/1
Switch(config-if)#switchport mode trunk 
Switch(config-if)#switchport trunk allowed vlan 20
Switch(config-if)#switchport trunk allowed vlan add 10
Switch(config-if)#exit
```

## Router

```bash
Router#enable
Router#configure terminal
Router(config)#interface fastEthernet 1/0
Router(config-if)#ip address 192.168.1.1 255.255.255.0
Router(config-if)#no shutdown
Router(config-if)#exit
Router(config)#interface fastEthernet 0/0.10
Router(config-subif)#encapsulation dot1Q 10
Router(config-subif)#ip address 192.168.0.1 255.255.255.0
Router(config-subif)#exit
Router(config)#interface fastEthernet 0/0.20
Router(config-subif)#encapsulation dot1Q 10
Router(config-subif)#ip address 192.168.2.1 255.255.255.0
Router(config-subif)#exit
Router(config)#interface FastEthernet0/0
Router(config-if)#no shutdown
```