- [Revisão Prova 1](#revisão-prova-1)
  - [Comandos Linux](#comandos-linux)
  - [Camadas de Modelo OSI](#camadas-de-modelo-osi)
    - [Camada Física - 1](#camada-física---1)
    - [Camada de Enlace - 2](#camada-de-enlace---2)
      - [MAC](#mac)
      - [LLC](#llc)
    - [Camada de Rede - 3](#camada-de-rede---3)
    - [Camada de Transporte - 4](#camada-de-transporte---4)
      - [TCP](#tcp)
      - [UDP](#udp)
    - [Camada de Sessão - 5](#camada-de-sessão---5)
    - [Camada de Apresentação - 6](#camada-de-apresentação---6)
    - [Camada de Aplicação - 7](#camada-de-aplicação---7)
  - [IP e Máscara de Sub-rede](#ip-e-máscara-de-sub-rede)
    - [IP](#ip)
      - [Rede e Host](#rede-e-host)
    - [Máscara de Sub-rede](#máscara-de-sub-rede)
      - [Classes de IP](#classes-de-ip)
    - [Endereços Reservados](#endereços-reservados)
      - [Endereços privados e públicos](#endereços-privados-e-públicos)
  - [Comandos de configuração de terminais no Packet Tracer](#comandos-de-configuração-de-terminais-no-packet-tracer)

# Revisão Prova 1 

## Comandos Linux

- `ls` - Lista os arquivos e diretórios do diretório atual
- `mdkir` - Cria um diretório
- `cd` - Muda de diretório
- `pwd` - Mostra o diretório atual
- `rm` - Remove arquivos e diretórios
- `cp` - Copia arquivos e diretórios
- `mv` - Move arquivos e diretórios
- `cat` - Mostra o conteúdo de um arquivo
- `echo` - Imprime uma mensagem na tela
    > - `echo "Hello World"`
    > - Imprimir em um arquivo `echo "Hello World" > arquivo.txt`
    > - Concatenar texto em um arquivo `echo "Hello World" >> arquivo.txt`
- `clear` - Limpa a tela
- `touch` - Cria um arquivo vazio
    >`touch arquivo.txt`
- `nano` - Editor de texto no terminal
- `chmod` - Altera as permissões de um arquivo
    > - `chmod 777 arquivo.txt` - Permissão total
    > - `chmod 755 arquivo.txt` - Permissão de leitura e exec
    > - `chmod 644 arquivo.txt` - Permissão de leitura e escrita
- `>`, `>>` - Redirecionamento de saída
    > - `ifconfig > arquivo.txt` - Cria um arquivo com a saída do comando
    > - `ifconfig >> arquivo.txt` - Concatena a saída do comando em um arquivo
- `ifconfig` - Mostra as configurações de rede
- `ping` - Testa a conectividade com um host
    > `ping 192.168.1.1`

---

## Camadas de Modelo OSI

### Camada Física - 1
Define as especificações elétricas, mecânicas, procedurais e funcionais para ativar, manter e desativar conexões físicas entre dispositivos finais.
> Cabos, conectores, switches, hubs, placas de rede

É a camada mais baixa do modelo OSI. Ela é responsável por transmitir bits individuais de um computador para outro. Ela define as especificações elétricas, mecânicas, procedurais e funcionais para ativar, manter e desativar conexões físicas entre dispositivos finais. Isso inclui a especificação de cabos, conectores, switches, hubs e placas de rede.

### Camada de Enlace - 2

Responsável por transferir dados entre dispositivos conectados diretamente. É a camada que conecta a camada física à camada de rede. 

#### MAC

Endereço físico de um dispositivo de rede. É um identificador exclusivo atribuído a cada dispositivo de rede para fins de comunicação em uma rede.

#### LLC

Controle de enlace lógico. É a subcamada da camada de enlace que controla o fluxo de dados entre dispositivos conectados diretamente.

### Camada de Rede - 3

Responsável pela transferência de pacotes de dados de origem para destino. Possui protocolos de roteamento que determinam a melhor rota para os pacotes de dados. É onde os roteadores operam com o endereço IP.

### Camada de Transporte - 4

Responsável por fornecer comunicação de dados confiável e eficiente entre processos de aplicação em diferentes dispositivos, oferecendo confiabilidade (TCP) ou velocidade (UDP).

#### TCP
 Protocolo de controle de transmissão, fornece comunicação confiável entre aplicativos.
#### UDP
Protocolo de datagrama de usuário, fornece comunicação não confiável entre aplicativos, porém é mais rápido que o TCP.

### Camada de Sessão - 5 

Responsável por estabelecer, gerenciar e encerrar conexões entre aplicativos.

### Camada de Apresentação - 6

Responsável por traduzir, criptografar e compactar os dados para serem transmitidos pela rede.

### Camada de Aplicação - 7

Responsável por fornecer serviços de rede para aplicativos.

---

## IP e Máscara de Sub-rede

### IP  

O endereço **IP** é um identificador único atribuído a cada dispositivo de rede para fins de comunicação em uma rede. Ele é composto por uma parte de rede e uma parte de host. A máscara de sub-rede é usada para separar a parte de rede da parte de host em um endereço IP.

O endereço **IP** é composto por 4 octetos, cada um representando um byte de dados. Cada octeto é representado por um número decimal de 0 a 255. Por exemplo, `192.168.1.1` é um endereço IP, onde 192, 168, 1, e 1 são os quatro octetos, e cada um pode variar entre 0 e 255.

#### Rede e Host

A **rede** é a parte de um endereço IP que identifica a rede à qual um dispositivo pertence.
O prefixo de rede é determinado pela máscara de sub-rede e indica quais bits do endereço IP são usados para identificar a rede.
Por exemplo, em um endereço IP como `192.168.1.10/24`, o prefixo `192.168.1` é a parte da rede, e ela é compartilhada por todos os dispositivos dentro dessa rede. O número 24 na máscara de sub-rede indica que os primeiros 24 bits do endereço IP são usados para identificar a rede.

Já o **host** é a parte do endereço IP que identifica um dispositivo específico dentro da rede.
A parte do host é determinada pelos bits restantes após a máscara de sub-rede.
Usando o mesmo exemplo, `192.168.1.10/24`, a parte do host é 10, que identifica especificamente um dispositivo dentro da rede `192.168.1.0/24`. Os dispositivos dentro dessa rede terão endereços IPs como `192.168.1.1`, `192.168.1.2`, etc., até o `192.168.1.254`, por exemplo.

> Em resumo:
>   - **Rede**: Identifica a rede à qual um dispositivo pertence.
>   - **Host**: Identifica um dispositivo específico dentro da rede.

### Máscara de Sub-rede

A **máscara de sub-rede** é usada para separar a parte de rede da parte de host em um endereço IP. Ela é composta por 4 octetos, assim como o endereço IP, e é representada por uma sequência de bits 1 seguidos por uma sequência de bits 0. Por exemplo, `255.255.255.0` é uma máscara de sub-rede comum, onde os 24 primeiros bits (correspondentes a 255.255.255) são 1's e os 8 bits restantes (correspondentes a 0) são 0's. Isso significa que os primeiros 24 bits de um endereço IP representam a parte da rede, enquanto os últimos 8 bits representam a parte do host. A máscara de sub-rede ajuda a identificar quais endereços IP pertencem à mesma rede e quais pertencem a redes diferentes.

#### Classes de IP

Existem cinco classes de endereços IP: A, B, C, D e E. As classes A, B e C são usadas para endereços IP públicos, enquanto as classes D e E são usadas para endereços IP reservados.

- **Classe A**: Os endereços IP da classe A têm o primeiro octeto variando de 1 a 126. Eles são usados para redes grandes e podem acomodar até 16 milhões de hosts. Exemplo: 10.0.0.0/8. A máscara de sub-rede padrão para a classe A é 255.0.0.0. Adicionamos a `/8` para indicar que os primeiros 8 bits são da parte de rede. 
    > Em binário, a máscara de sub-rede é `11111111.00000000.00000000.00000000`.

- **Classe B**: Os endereços IP da classe B têm o primeiro octeto variando de 128 a 191. Eles são usados para redes de médio porte, com capacidade para até 65 mil hosts. Exemplo: 172.16.0.0/16. A máscara de sub-rede padrão para a classe B é 255.255.0.0. Adicionamos a `/16` para indicar que os primeiros 16 bits são da parte de rede.
    > Em binário, a máscara de sub-rede é `11111111.11111111.00000000.00000000`.

- **Classe C**: Os endereços IP da classe C têm o primeiro octeto variando de 192 a 223. Eles são usados para redes pequenas e podem acomodar até 254 hosts. Exemplo: 192.168.1.0/24. A máscara de sub-rede padrão para a classe C é 255.255.255.0. Adicionamos a `/24` para indicar que os primeiros 24 bits são da parte de rede.
    > Em binário, a máscara de sub-rede é `11111111.11111111.11111111.00000000`.

### Endereços Reservados

Há dois endereços de IP reservados que não podem ser acessados, de Rede e de Broadcast. Assim, a quantidade de endereços disponíveis para hosts é menor que a quantidade de endereços possíveis, ou seja, `2^n - 2`. Por exemplo, para uma máscara de sub-rede de 24 bits, temos `2^8 - 2 = 254` endereços disponíveis para hosts.

- **Endereço de Rede**: O endereço de rede é o endereço IP que identifica a rede em si. Ele é usado para encaminhar pacotes de dados entre redes. O endereço de rede é o primeiro endereço de uma rede e geralmente termina em 0. Por exemplo, o endereço de rede para a rede `192.168.1.0/24` é `192.168.1.0`, onde o "0" representa a parte do host. Esse endereço é usado para identificar a rede, mas não pode ser atribuído a um dispositivo específico dentro da rede.

- **Endereço de Broadcast**: O endereço de broadcast é o endereço IP que envia pacotes de dados para todos os dispositivos em uma rede. Ele é usado para enviar mensagens para todos os dispositivos em uma rede simultaneamente. O endereço de broadcast é o último endereço de uma rede e geralmente termina em 255. Por exemplo, o endereço de broadcast para a rede `192.168.1.0/24` é `192.168.1.255`, onde o "255" representa a parte do host. Esse endereço é usado para enviar pacotes de dados que precisam ser recebidos por todos os dispositivos na rede, como mensagens de controle ou descoberta de serviços.

#### Endereços privados e públicos

Para determinar se um endereço IP é privado ou público, você precisa verificar se o endereço IP pertence a um dos intervalos definidos para endereços privados, conforme os seguintes intervalos estabelecidos pelo RFC 1918:

- **Classe A**: `10.0.0.0` até `10.255.255.255`
- **Classe B**: `172.16.0.0` até `172.31.255.255`
- **Classe C**: `192.168.0.0` até `192.168.255.255`

Se o endereço IP estiver dentro de um desses intervalos, ele é privado. Caso contrário, é público.

Por exemplo, o endereço IP `10.9.0.44` é privado, pois está dentro do intervalo da classe A. Já o endereço IP `200.217.235.80`, é de classe C e é público, pois não está em nenhum dos intervalos definidos para endereços privados.

---

## Comandos de configuração de terminais no Packet Tracer

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

Para validação de conexão, utilize o comando `ping` no terminal do roteador. Por exemplo, `ping 192.168.1.10`.

Caso queira configurar a interface serial, siga os mesmos passos, mas substitua `FastEthernet0/0` por `Serial0/0`. 

Documentação feita aqui: [Comando de configuração de terminais no Packet Tracer](./packettracer/commands.md)








