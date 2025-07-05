# Persistência e Padrão DAO

## 1 - O que é persistência em sistemas de informação e por que ela é importante?
Persistência é a capacidade de armazenar dados de forma permanente, permitindo que informações sejam mantidas mesmo após o término da execução de um sistema. Ela é importante porque garante a integridade, disponibilidade e continuidade dos dados essenciais para o funcionamento e tomada de decisão em sistemas de informação.

## 2 - Quais suas vantagens e limitações dos tipos de persistência: Sistema de arquivos, Banco de dados relacional, Banco de dados NoSQL e Banco de dados de objetos?
- **Sistema de arquivos**  
  Vantagens: Simplicidade, fácil implementação, baixo custo.  
  Limitações: Falta de estrutura, difícil consulta e integridade, pouca escalabilidade.
- **Banco de dados relacional**  
  Vantagens: Estrutura organizada, suporte a transações, integridade e consultas complexas.  
  Limitações: Escalabilidade limitada, rigidez no esquema.
- **Banco de dados NoSQL**  
  Vantagens: Alta escalabilidade, flexibilidade de esquema, bom desempenho para grandes volumes.  
  Limitações: Menor suporte a transações complexas, consistência eventual.
- **Banco de dados de objetos**  
  Vantagens: Integração com orientação a objetos, persistência transparente de objetos.  
  Limitações: Menor adoção, interoperabilidade limitada.

## 3 - Quais são os principais desafios na gestão da persistência em projetos de software?
- Garantir integridade e segurança dos dados
- Manter desempenho e escalabilidade
- Lidar com migração e evolução de dados
- Integrar diferentes fontes e tipos de dados
- Gerenciar concorrência e transações

## 4 - O que é o padrão DAO ?
DAO (Data Access Object) é um padrão de projeto que separa a lógica de acesso a dados da lógica de negócios, fornecendo uma interface para operações de persistência e facilitando a manutenção e evolução do sistema.

## 5 - Quais são os principais componentes da estrutura de um DAO?
- Interface DAO: define os métodos de acesso aos dados.
- Implementação DAO: realiza as operações definidas na interface.
- Entidades ou modelos: representam os dados manipulados.
- Fonte de dados: local onde os dados são armazenados (banco de dados, arquivos, etc).

## 6 - Quais são as vantagens e desvantagens do uso do padrão DAO?
Vantagens:  
- Facilita a manutenção e testes  
- Promove separação de responsabilidades  
- Permite trocar a fonte de dados com menor impacto

Desvantagens:  
- Pode aumentar a complexidade do projeto  
- Exige mais código e estrutura inicial
