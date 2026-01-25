# Padrões de Projeto

## 1 - O que são padrões de projeto e qual sua importância no desenvolvimento de software orientado a objetos?

Padrões de projeto são soluções testadas e aprovadas para problemas comuns que encontramos no desenvolvimento de software.

A importância deles é que economizam tempo, tornam o código mais organizado e fácil de entender, facilitam a manutenção e estabelecem uma linguagem comum entre desenvolvedores, permitindo comunicação mais eficiente sobre soluções arquiteturais.

## 2 - Explique a diferença entre padrões de projeto criacionais, estruturais e comportamentais.

**Criacionais**: Responsáveis pelos mecanismos de criação de objetos. Exemplos: Singleton, Factory Method, Abstract Factory.

**Estruturais**: Definem como classes e objetos são compostos para formar estruturas maiores e mais complexas. Exemplos: Adapter, Decorator, Facade.

**Comportamentais**: Focam na comunicação entre objetos e na distribuição de responsabilidades. Exemplos: Observer, Strategy, Command.

## 3 - Qual é o principal objetivo do padrão Singleton e quais cuidados devem ser tomados ao usá-lo?

O Singleton tem como objetivo garantir que uma classe possua apenas uma instância durante toda a execução da aplicação, fornecendo um ponto de acesso global a essa instância. É aplicável em cenários como gerenciamento de configurações, conexões com banco de dados ou sistemas de log.

Cuidados necessários:
- Dificulta a realização de testes unitários devido à criação de dependências globais
- Requer implementação thread-safe em aplicações concorrentes
- Pode evoluir para um anti-padrão "god object" se não for bem controlado
- Reduz a flexibilidade e extensibilidade do código

## 4 - Descreva um cenário em que o Factory Method seria mais indicado do que o uso direto de construtores.

Considere um sistema de notificações que deve suportar múltiplos canais de comunicação (email, SMS, push notification). O Factory Method seria mais adequado que construtores diretos pois permite determinar o tipo específico de notificação em tempo de execução, baseado em parâmetros dinâmicos.

O padrão é especialmente útil quando o tipo exato da classe a ser instanciada não pode ser determinado em tempo de compilação, ou quando o processo de criação do objeto envolve lógica complexa e múltiplas etapas de inicialização.

## 5 - Explique como o padrão Adapter promove a reutilização de código em sistemas legados.

O padrão Adapter atua como uma camada de tradução entre interfaces incompatíveis, permitindo que código legado seja integrado a novos sistemas sem modificações. Funciona de forma similar a um adaptador de energia, convertendo uma interface existente para outra esperada pelo cliente.

Em sistemas corporativos, é comum encontrar APIs de pagamento legadas que precisam ser integradas a novos sistemas. O Adapter encapsula a complexidade da conversão entre as diferentes interfaces, eliminando a necessidade de reescrever o código funcional existente e mantendo a integridade do sistema legado.

## 6 - Como o padrão Decorator difere da herança na extensão de funcionalidades?

A herança oferece extensão de funcionalidades de forma estática, definida em tempo de compilação. O padrão Decorator, por sua vez, permite extensão dinâmica de funcionalidades em tempo de execução.

**Herança**: Cria uma hierarquia fixa de classes onde as funcionalidades são definidas permanentemente na estrutura da classe.

**Decorator**: Permite composição flexível de funcionalidades, onde comportamentos podem ser adicionados ou removidos dinamicamente conforme necessário, sem alterar a estrutura básica do objeto.

## 7 - Cite um exemplo prático do uso do padrão Decorator.

**Sistema de processamento de mídia:**

Um sistema de streaming pode aplicar diferentes processamentos a um arquivo de vídeo base através de decorators especializados:
- Decorator de legendas para adicionar subtítulos
- Decorator de qualidade para ajustar resolução  
- Decorator de marca d'água para inserir logotipos
- Decorator de controle parental para aplicar filtros de conteúdo

Esta abordagem permite combinações flexíveis de funcionalidades, onde cada decorator adiciona sua responsabilidade específica sem interferir nos demais componentes.

## 8 - Em um sistema que precisa integrar componentes com interfaces incompatíveis, qual padrão estrutural seria mais adequado: Adapter, Decorator ou Bridge? Justifique.

O padrão **Adapter** seria o mais adequado para esta situação.

O Adapter foi desenvolvido especificamente para resolver problemas de incompatibilidade entre interfaces, convertendo a interface de uma classe existente para outra interface esperada pelos clientes. Sua função principal é permitir que classes com interfaces incompatíveis trabalhem em conjunto.

O Decorator tem como propósito adicionar responsabilidades a objetos dinamicamente, enquanto o Bridge visa separar uma abstração de sua implementação. Portanto, o Adapter é a solução mais direcionada para problemas de incompatibilidade de interfaces.

## 9 - Explique o funcionamento básico do padrão Observer.

O padrão Observer estabelece uma dependência um-para-muitos entre objetos, de modo que quando um objeto muda de estado, todos os seus dependentes são notificados e atualizados automaticamente. O padrão define um Subject (observado) e múltiplos Observers (observadores).

Quando ocorre uma mudança significativa no Subject, este notifica todos os Observers registrados, que então podem reagir adequadamente à alteração. Este mecanismo é amplamente utilizado em interfaces gráficas para implementar o padrão Model-View, onde mudanças no modelo de dados automaticamente atualizam as visualizações correspondentes.

## 10 - Por que padrões criacionais são considerados fundamentais para a flexibilidade do software?

Os padrões criacionais promovem flexibilidade ao desacoplar o processo de criação de objetos do código cliente que os utiliza. Esta separação permite que o sistema seja mais adaptável a mudanças nos requisitos de criação de objetos.

Ao utilizar abstrações como fábricas e builders em vez de instanciação direta, o sistema ganha a capacidade de modificar os mecanismos de criação sem impactar o código que consome os objetos. Esta abordagem facilita a evolução do software, permitindo que alterações nos processos de criação sejam centralizadas e controladas.

Consequentemente, o sistema torna-se mais maintível e extensível, características essenciais para software de qualidade empresarial.

