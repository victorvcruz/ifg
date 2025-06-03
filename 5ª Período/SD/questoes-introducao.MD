# Questões de Introdução aos Sistemas Distribuídos

## 1 - Explique o que caracteriza um sistema distrubído e comente por que esse tipo de sistema é cada vez mais comum no nosso coditiano digital.
Um sistema distribuído é caracterizado pela distribuição de componentes computacionais em diferentes locais, que se comunicam e colaboram para alcançar um objetivo comum. Esse tipo de sistema é favorecido por sua alta capacidade de escabilidade, resiliência e flexibidade.

## 2 - Explique o que dizer transparência (em sistema distribuído) e dê exemplos de diferentes tipos de transparência.
Transparência em sistemas distribuídos refere-se à ocultação da complexidade do sistema para o usuário, de modo que ele não perceba que está interagindo com um sistema distribuído. Exemplos incluem:
- **Transparência de localização**: O usuário não precisa saber onde os recursos estão localizados fisicamente.
- **Transparência de migração**: Recursos podem ser movidos sem que o usuário perceba.
- **Transparência de replicação**: O usuário não precisa saber que existem várias cópias de um recurso para garantir disponibilidade e desempenho.

## 3 - Descreva o que quer dizer um Sistema Escalável.
 Um sistema escalável é aquele que pode se adaptar ao aumento da carga de trabalho necessário sem afetar o desempenho geral. 

## 4 - Explique os tipos de escalabilidade.
Há dois tipos de escalabilidade, a horizontal e a vertical. A escalabilidade horizontal envolve adicionar mais máquinas ao sistema, enquanto a escalabilidade vertical envolve aumentar os recursos de uma única máquina, RAM, CPU, etc.

## O que significa tolerância a falhas em Sistemas Distribuídos?
É a capacidade do sistema de continuar operando mesmo quando alguns de seus componentes falham. Isso é alcançado por meio de redundância, replicação e mecanismos de detecção e recuperação de falhas, garantindo que o sistema permaneça disponível e funcional.
