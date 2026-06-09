# INSTITUTO FEDERAL DE EDUCAÇÃO, CIÊNCIA E TECNOLOGIA DE GOIÁS
**CAMPUS GOIÂNIA**  
DEPARTAMENTO DAS ÁREAS ACADÊMICAS IV  
COORDENAÇÃO DE INFORMÁTICA  
BACHARELADO EM SISTEMAS DE INFORMAÇÃO

---

# Frameworks de apoio a Governança e Gestão de TI - ITIL

**Filipe Moreira Coelho**  
**Julia Monteiro de Oliveira**  
**Victor Hugo Vieira Cruz**

Goiânia/GO — 18/05/2026

---

Trabalho apresentado na disciplina de Gestão e Governança em Tecnologia da Informação do curso de Sistemas de Informação do Campus Goiânia como parte das atividades avaliativas do semestre.

**Prof.º Ariel Cardoso Mendes**

Goiânia/GO — 2026/1

---

## SUMÁRIO

1. [Introdução](#1-introdução)
2. [O Conceito de Serviço e Valor](#2-o-conceito-de-serviço-e-valor)
3. [As 4 Dimensões da Gestão de Serviços](#3-as-4-dimensões-da-gestão-de-serviços)
4. [O Sistema de Valor de Serviço (SVS)](#4-o-sistema-de-valor-de-serviço-svs)
5. [A Cadeia de Valor de Serviço (Service Value Chain)](#5-a-cadeia-de-valor-de-serviço-service-value-chain)
6. [Práticas de Gestão (A Evolução dos "Processos")](#6-práticas-de-gestão-a-evolução-dos-processos)
7. [Melhoria Contínua](#7-melhoria-contínua)
8. [Conclusão](#8-conclusão)
9. [Referências Bibliográficas](#9-referências-bibliográficas)

---

## 1. INTRODUÇÃO

No cenário corporativo atual, a Tecnologia da Informação deixou de ser apenas um departamento de suporte operacional para se tornar um recurso estratégico essencial para o sucesso, a inovação e a sobrevivência das empresas (ALMEIDA, 2022). Nesse contexto, a Gestão de Serviços de TI (ITSM) atua com o objetivo principal de garantir que os serviços tecnológicos estejam perfeitamente alinhados às necessidades do negócio, suportando ativamente suas operações e impulsionando a transformação organizacional (ZLURI, 2026).

Para orientar essa gestão, o ITIL se consolidou como o framework público mais reconhecido e adotado mundialmente (FRESHWORKS, 2024; ZLURI, 2026). Em suas versões anteriores, culminando na edição de 2011 (v3), o ITIL forneceu uma base sólida estruturada em processos e dividida de forma sequencial em cinco fases do ciclo de vida do serviço: Estratégia, Desenho, Transição, Operação e Melhoria Contínua (ITSMF UK, 2012; FRESHWORKS, 2024). Embora essa abordagem tenha trazido um alto nível de maturidade e controle de qualidade para as organizações, seu modelo linear e altamente processual passou a enfrentar desafios de velocidade frente à rápida evolução do mercado de tecnologia.

Com a popularização de metodologias e culturas dinâmicas como Agile, Lean e DevOps, além da necessidade de suportar arquiteturas de sistemas cada vez mais distribuídas e complexas, o framework precisou se adaptar (CENTRAL IT, 2025). O ITIL v4 representa uma mudança de paradigma: ele abandona a visão rígida baseada apenas no ciclo de vida em favor de um modelo ágil, sistêmico e modular (FRESHWORKS, 2024). O foco deixa de ser apenas a "entrega" unilateral de serviços e passa a ser a co-criação de valor (FRESHWORKS, 2024), garantindo que a governança e as boas práticas de TI atuem como facilitadores de entregas rápidas, seguras e adaptáveis, em vez de se tornarem gargalos burocráticos (CENTRAL IT, 2025).

O objetivo desta apresentação é justamente explorar a arquitetura e os conceitos fundamentais dessa nova versão. Discutiremos como o ITIL v4 redefine a criação de valor, as dimensões necessárias para uma gestão holística, o funcionamento prático do Sistema de Valor de Serviço (SVS) e a evolução de seus processos para práticas flexíveis. Dessa forma, demonstraremos como o framework atual equipa as organizações para gerenciar serviços de TI de ponta a ponta com agilidade e excelência.

---

## 2. O Conceito de Serviço e Valor

A base fundamental para compreender a gestão de serviços moderna reside na correta interpretação do que constitui um serviço e de como o valor é gerado a partir dele. Tradicionalmente, o framework define um serviço como um meio de permitir a entrega de valor aos clientes, facilitando a obtenção dos resultados que eles desejam alcançar, sem que precisem assumir custos e riscos específicos (FRESHWORKS, 2024). No entanto, o ITIL v4 expande significativamente essa visão ao introduzir o conceito de co-criação de valor (CENTRAL IT, 2025; FRESHWORKS, 2024). Sob essa nova perspectiva, o valor deixa de ser uma mercadoria estática entregue de maneira unidirecional pelo provedor ao consumidor, ele passa a ser o resultado de uma parceria dinâmica e colaborativa, onde ambas as partes, e demais partes interessadas, interagem ativamente para estabelecer, manter e otimizar os benefícios gerados pelo serviço de forma conjunta (FRESHWORKS, 2024).

A natureza do valor está diretamente ligada às percepções, preferências e necessidades reais do cliente. Qualquer componente tecnológico ou infraestrutura, por mais sofisticada que seja, não possui valor isolado, ela só adquire relevância quando atua como um facilitador para que o negócio atinja seus objetivos estratégicos. Um sistema automatizado ou uma arquitetura de banco de dados, por exemplo, só realizam seu valor quando permitem que a operação sofra menos interrupções, otimize custos ou responda de forma ágil às mudanças de mercado. Portanto, a eficácia de um serviço de TI é medida estritamente pela sua capacidade de se alinhar à realidade do consumidor e traduzir recursos técnicos em resultados práticos e mensuráveis para o negócio.

Para estruturar e avaliar como um serviço apoia essa geração de valor, o framework utiliza dois conceitos fundamentais e indissociáveis: a **utilidade** e a **garantia**. A utilidade refere-se ao *que* o serviço faz, representando a sua adequação ao propósito (*fit for purpose*), se traduz nos recursos que melhoram o desempenho do cliente ou removem restrições que o impediam de alcançar um resultado. Por outro lado, a garantia detalha *como* o serviço é entregue, definindo a sua adequação ao uso (*fit for use*). A garantia assegura que o nível de serviço prometido será sustentado em termos de quatro pilares críticos: disponibilidade, capacidade, continuidade e segurança da informação. Desse modo, o valor real só se concretiza por meio do equilíbrio entre esses dois fatores, uma vez que uma funcionalidade excelente (utilidade) perde seu propósito se não for confiável, segura e escalável (garantia).

---

## 3. As 4 Dimensões da Gestão de Serviços

Para garantir uma abordagem holística e integrada na gestão de serviços, o ITIL v4 introduz as **Quatro Dimensões**, que representam as perspectivas críticas necessárias para a entrega eficaz e eficiente de valor na forma de produtos e serviços aos clientes. Esse conceito evoluiu diretamente dos antigos "4 Ps" do desenho de serviço (Pessoas, Produtos, Processos e Parceiros) característicos das versões anteriores do framework. A grande mudança analítica na nova versão é que essas dimensões deixam de ser restritas apenas à fase de desenho de uma solução técnica para se tornarem aplicáveis transversalmente a todo o Sistema de Valor de Serviço (SVS). O foco central dessa abordagem multidimensional é assegurar que a organização mantenha um equilíbrio constante entre todas as áreas, uma vez que a negligência ou o foco excessivo em apenas uma delas pode resultar em serviços ineficazes, silos organizacionais, custos desnecessários e falhas graves de governança (CENTRAL IT, 2025).

A **primeira dimensão, Organizações e Pessoas**, reconhece que a eficácia de qualquer serviço de TI depende intrinsecamente de fatores humanos e estruturais. Ela abrange não apenas as estruturas organizacionais formais, papéis e linhas de responsabilidade, mas também a cultura corporativa, os canais de comunicação e as competências necessárias para que as equipes operem de maneira colaborativa (CENTRAL IT, 2025).

Logo em seguida, a dimensão de **Informação e Tecnologia** engloba o conhecimento, as informações e as ferramentas tecnológicas necessárias para gerenciar e operar os serviços de forma estável. No contexto moderno, essa perspectiva lida com os desafios de arquitetura de dados, sistemas de gerenciamento de fluxo de trabalho, bases de conhecimento e a infraestrutura subjacente, como computação em nuvem e microsserviços, exigindo que a organização estabeleça critérios claros de segurança da informação, conformidade regulatória, integridade e disponibilidade dos dados circulantes (CENTRAL IT, 2025).

A **terceira dimensão, Parceiros e Fornecedores**, aborda o ecossistema de relacionamentos que a organização mantém com outras empresas envolvidas no desenho, desenvolvimento, implantação e melhoria contínua de seus serviços. Em um mercado altamente interconectado e dependente de provedores externos, o sucesso operacional está diretamente ligado à capacidade de gerenciar contratos de suporte e integrar fornecedores terceirizados de maneira harmoniosa à operação interna da companhia, visando a otimização dos processos (CENTRAL IT, 2025).

Por fim, a **quarta dimensão, Fluxos de Valor e Processos**, define como as diferentes partes da organização trabalham juntas de maneira coordenada para garantir eficiência e qualidade, permitindo a criação de valor (CENTRAL IT, 2025). Enquanto os processos descrevem os conjuntos estruturados de atividades projetados para cumprir um objetivo específico ao transformar entradas em saídas, os fluxos de valor representam a jornada ou sequência exata de passos que a organização realiza para responder a uma demanda real, permitindo identificar desperdícios, otimizar tarefas e acelerar o tempo de entrega ao mercado.

Além da análise interna dessas quatro perspectivas, o framework destaca que a gestão de serviços não ocorre em uma bolha, sendo constantemente influenciada por pressões externas que fogem ao controle direto da organização. Essas forças externas são mapeadas por meio de modelos que avaliam múltiplos fatores, incluindo aspectos Políticos, Econômicos, Sociais, Tecnológicos, Legais e Ambientais (também conhecido como modelo **PESTLE**) do ambiente em que a empresa atua (PEOPLECERT, 2024). Compreender como essas variáveis externas moldam a conformidade regulatória, as preferências dos consumidores e as restrições financeiras é indispensável para que as quatro dimensões permaneçam ágeis, resilientes e devidamente calibradas para suportar a estratégia de negócios a longo prazo.

---

## 4. O Sistema de Valor de Serviço (SVS)

O **Sistema de Valor de Serviço (SVS)** representa a arquitetura central e o coração metodológico do ITIL v4, fornecendo o modelo operacional que descreve como todos os componentes e atividades de uma organização trabalham juntos de forma sistêmica para habilitar a criação de valor (CENTRAL IT, 2025). Em contraste com os modelos operacionais tradicionais, que frequentemente limitavam a fluidez ao isolar as equipes em silos departamentais de desenvolvimento, infraestrutura e suporte, o SVS propõe uma visão unificada e altamente flexível. Todo esse ecossistema é acionado por duas entradas principais: a **"oportunidade"**, que representa possibilidades ou opções para adicionar valor e impulsionar inovações, e a **"demanda"**, que consiste na necessidade explícita ou solicitação direta de consumidores internos ou externos por produtos e serviços (PEOPLECERT, 2024). A saída única e o objetivo fundamental de todo o trânsito de informações dentro desse sistema é a geração de **"valor"** tangível, assegurando que os serviços entregues atendam perfeitamente aos critérios de utilidade e garantia (CENTRAL IT, 2025; PEOPLECERT, 2024).

Para garantir que a oportunidade e a demanda sejam efetivamente transformadas em valor, o SVS é estruturado em cinco componentes fundamentais que interagem de forma contínua (PEOPLECERT, 2024):

1. **Princípios Orientadores** — atuam como um conjunto de recomendações e valores culturais universais — como focar no valor, pensar holisticamente e otimizar e automatizar tarefas (CENTRAL IT, 2025; INTERNATIONAL IT, 2022). Esses princípios servem como uma bússola comportamental para guiar as decisões das equipes, independentemente das mudanças nas tecnologias, metodologias de desenvolvimento ou estruturas da empresa (INTERNATIONAL IT, 2022).

2. **Governança** — o componente corporativo responsável por alinhar as operações tecnológicas com a direção estratégica do negócio (PEOPLECERT, 2024; ZLURI, 2026). A governança assegura que as atividades operacionais operem sob políticas claras de conformidade, segurança, mitigação de riscos e integridade de dados, avaliando e monitorando o desempenho de toda a organização em tempo real (ZLURI, 2026).

3. **Cadeia de Valor de Serviço** — no núcleo funcional do SVS, operando como o motor de transformação da organização (PEOPLECERT, 2024). Ela abandona a antiga progressão linear de fases em favor de um modelo em rede, composto por seis atividades centrais interconectadas que podem ser combinadas de infinitas maneiras para responder rapidamente a diferentes cenários de negócios (CENTRAL IT, 2025; PEOPLECERT, 2024).

4. **Práticas de Gestão** — dando sustentação a todas as atividades e substituindo a visão rígida dos antigos "processos" (CENTRAL IT, 2025). As práticas englobam conjuntos amplos de recursos organizacionais combinando ferramentas tecnológicas, habilidades humanas e procedimentos de fluxo de trabalho desenhados para realizar trabalhos específicos, desde a gestão de incidentes até o desenho de arquiteturas complexas.

5. **Melhoria Contínua** — permeando de forma transversal todo o SVS (ATLASSIAN, 2024; PEOPLECERT, 2024). Ela garante que o sistema de valor não seja estático, mas sim um organismo adaptável que aprende constantemente com suas falhas operacionais, otimiza suas entregas e evolui na mesma velocidade em que o mercado de tecnologia se transforma (ATLASSIAN, 2024).

---

## 5. A Cadeia de Valor de Serviço (Service Value Chain)

No centro operacional do Sistema de Valor de Serviço encontra-se a **Cadeia de Valor de Serviço**, que representa a principal ruptura metodológica com as versões anteriores do framework (CENTRAL IT, 2025). Nas edições passadas, como o ITIL 2011, as melhores práticas eram estruturadas em torno de um ciclo de vida de serviço fundamentalmente linear, composto de forma sequencial pelas fases de Estratégia, Desenho, Transição, Operação e Melhoria Contínua (ITSMF UK, 2012; FRESHWORKS, 2024). Embora essa estrutura fosse extremamente eficaz para garantir controle e estabilidade, seu modelo frequentemente se comportava como uma cascata rígida, limitando a agilidade exigida pelos negócios modernos. O ITIL v4 substitui esse fluxo em etapas por um modelo operacional flexível em formato de cubo ou rede, onde diferentes blocos de construção não seguem uma ordem predeterminada (PEOPLECERT, 2024). A Cadeia de Valor de Serviço atua, portanto, como o modelo genérico que engloba todas as atividades cruciais para responder à demanda do cliente e facilitar a co-criação de valor através da criação, gestão e suporte de produtos e serviços (CENTRAL IT, 2025; PEOPLECERT, 2024).

Esse novo modelo operacional é arquitetado em torno de **seis atividades centrais** altamente interconectadas (PEOPLECERT, 2024):

- **Planejar** — assegura uma visão compartilhada do status atual e da direção estratégica em toda a organização.
- **Melhorar** — atua de forma onipresente para otimizar o desempenho de todas as outras atividades.
- **Engajar** — porta de entrada para o relacionamento, garantindo a compreensão contínua das necessidades de todas as partes interessadas.
- **Desenhar e Transitar** — foca em certificar que os serviços atendam às expectativas de custo, qualidade e tempo para o lançamento.
- **Obter/Construir** — lida com a aquisição, codificação ou integração de componentes reais de infraestrutura e software.
- **Entregar e Suportar** — garante que os serviços sejam operados conforme as garantias acordadas.

A grande força desse modelo reside no fato de que nenhuma atividade é um departamento isolado; elas interagem de forma constante e multidirecional, com recursos e informações fluindo livremente entre elas (PEOPLECERT, 2024).

Para materializar a forma como as equipes de TI utilizam essas seis atividades genéricas na prática diária, a Cadeia de Valor depende do desenho dos **Fluxos de Valor** (*Value Streams*) (PEOPLECERT, 2024). Enquanto a Cadeia de Valor fornece as peças do quebra-cabeça, um Fluxo de Valor é a sequência específica de passos e atividades que a organização orquestra para responder a um cenário ou demanda real (PEOPLECERT, 2024). Por exemplo, o fluxo de valor acionado para restaurar a operação após a queda de um banco de dados em produção adotará um caminho emergencial, focado intensamente em "Engajar" o usuário e "Entregar e Suportar" a correção. Em contrapartida, o fluxo desenhado para a concepção e implantação de uma nova arquitetura de software percorrerá ciclos repetitivos de "Desenhar e Transitar" e "Obter/Construir" (PEOPLECERT, 2024). Essa mecânica orientada a fluxos garante que os controles de governança não se tornem burocracias universais e engessadas, permitindo que a empresa adapte seu modo de trabalho ao contexto específico de cada demanda e atue em perfeita harmonia com metodologias ágeis e pipelines de entrega contínua (CENTRAL IT, 2025; PEOPLECERT, 2024).

---

## 6. Práticas de Gestão (A Evolução dos "Processos")

A transição metodológica do ITIL v4 também redefiniu profundamente a forma como as atividades operacionais são estruturadas e executadas, substituindo a antiga ênfase estrita em "processos" pelo conceito mais abrangente de **"práticas de gestão"** (CENTRAL IT, 2025). Nas versões anteriores do framework, um processo era classicamente definido como um conjunto estruturado de atividades desenhado para atingir um objetivo específico, recebendo entradas definidas e as transformando em saídas (ITSMF UK, 2012). Embora essa definição garantisse previsibilidade e padronização, a aplicação prática em muitas organizações resultou em fluxos de trabalho isolados e excessivamente burocráticos. Para corrigir essa distorção e alinhar a operação à agilidade necessária nos ambientes tecnológicos atuais, o ITIL v4 introduziu o conceito de prática, que consiste em um conjunto de recursos organizacionais desenhados não apenas para realizar um trabalho, mas para atingir um objetivo integrado à criação de valor (CENTRAL IT, 2025; PEOPLECERT, 2024). Essa mudança semântica e estrutural reconhece que um fluxo de atividades (o processo em si) é insuficiente se não for suportado pelas habilidades das pessoas, pelas ferramentas tecnológicas adequadas e por parceiros estratégicos — integrando, assim, as quatro dimensões da gestão de serviços em cada unidade de trabalho (CENTRAL IT, 2025).

Para organizar esse vasto conjunto de capacidades, o ITIL v4 categorizou suas **34 práticas de gestão** em três grupos principais (CENTRAL IT, 2025; PEOPLECERT, 2024):

1. **Práticas Gerais de Gestão** — herdadas de domínios corporativos mais amplos, incluem áreas como gestão de estratégia, arquitetura corporativa e gestão de riscos, garantindo que a TI atue em perfeita sintonia com a governança da empresa (CENTRAL IT, 2025).

2. **Práticas de Gestão de Serviços** — representam a evolução dos processos clássicos de suporte e operação, abrangendo o gerenciamento de incidentes, problemas e requisições (CENTRAL IT, 2025). Uma alteração notável nesse escopo foi a evolução do foco de controle rígido do escopo das mudanças sobre os serviços de TI para uma abordagem mais fluida. O gerenciamento de mudanças passou a se chamar **"habilitação de mudança"** (*Change Enablement*), refletindo uma postura que visa viabilizar entregas seguras em ambientes dinâmicos de integração contínua (CI/CD), abandonando o modelo de comitês de aprovação demorados.

3. **Práticas de Gestão Técnica** — como implantação e desenvolvimento de software, incorporam as disciplinas de engenharia diretamente ao framework (CENTRAL IT, 2025).

A grande virtude dessa nova arquitetura é que as práticas não operam como etapas sequenciais; elas funcionam como um repositório robusto de recursos e capacidades que a organização combina dinamicamente para construir seus Fluxos de Valor, garantindo uma resposta técnica sempre proporcional, resiliente e adequada à demanda do cliente (PEOPLECERT, 2024).

---

## 7. Melhoria Contínua

Para finalizar a análise do Sistema de Valor de Serviço, é fundamental compreender o papel da **Melhoria Contínua**, que transcende a ideia de ser apenas uma etapa conclusiva para se consolidar como uma força onipresente e direcional em toda a organização (CENTRAL IT, 2025; PEOPLECERT, 2024). Historicamente, nas versões anteriores do framework, a fase de Melhoria Contínua de Serviço (CSI) já se preocupava em manter o valor para os clientes por meio da avaliação e aprimoramento constantes da qualidade dos serviços e da maturidade de todos os processos do ciclo de vida (ATLASSIAN, 2024; ITSMF UK, 2012). O framework já alertava que a melhoria não deveria ser tratada simplesmente como um projeto temporário, acionado apenas quando algo falhava e impactava severamente o negócio; para ter sucesso real, a mentalidade de aprimoramento precisava ser incorporada à cultura organizacional e se tornar uma atividade de rotina (ATLASSIAN, 2024). O ITIL v4 absorve essa premissa e a eleva, transformando a melhoria contínua tanto em um componente transversal do SVS quanto em uma prática de gestão dedicada, aplicável a todos os elementos da operação, desde a governança até as ferramentas tecnológicas (CENTRAL IT, 2025; PEOPLECERT, 2024).

Para operacionalizar essa cultura, o ITIL v4 utiliza o **Modelo de Melhoria Contínua**, uma evolução estruturada que fornece uma maneira de a organização gerenciar melhorias ao contrastar sua posição atual com seus objetivos de longo prazo, identificando as lacunas existentes (ATLASSIAN, 2024). Esse modelo iterativo orienta as equipes por meio de perguntas fundamentais e sequenciais:

1. **"Qual é a visão?"** — compreender a direção estratégica
2. **"Onde estamos agora?"** — realizar avaliações de linha de base
3. **"Onde queremos chegar?"** — definir metas mensuráveis
4. **"Como chegaremos lá?"** — planejar a execução
5. **"Tomar a ação"** — executar ativamente o plano
6. **"Chegamos lá?"** — verificar os resultados e métricas
7. **"Como mantemos o impulso?"** — consolidar e sustentar as conquistas (ITSMF UK, 2012)

No contexto de ecossistemas tecnológicos modernos — onde métodos ágeis e entregas contínuas exigem adaptação diária —, esse modelo garante que os fluxos de valor não fiquem estagnados, permitindo que a TI aprenda continuamente com seus gargalos, otimize suas arquiteturas e permaneça perfeitamente alinhada às constantes transformações do mercado (CENTRAL IT, 2025; PEOPLECERT, 2024).

---

## 8. CONCLUSÃO

A transição conceitual e prática explorada ao longo desta apresentação demonstra que a evolução para o ITIL v4 representa um marco essencial na adequação da gestão de serviços à realidade tecnológica contemporânea. Ao evoluir da estrutura baseada nos cinco estágios sequenciais do ciclo de vida para a agilidade e flexibilidade do Sistema de Valor de Serviço, o framework afasta-se de um modelo que, embora garantisse uma base sólida de controle operacional, frequentemente encontrava dificuldades para acompanhar a velocidade exigida pelo mercado atual. A redefinição do objetivo principal para a co-criação ativa de valor, sustentada de forma transversal pelas Quatro Dimensões, assegura que as organizações evitem atuar em silos departamentais e passem a compreender a tecnologia não como um fim em si mesma, mas como um facilitador direto dos resultados que o cliente deseja alcançar.

Essa flexibilidade arquitetural e de governança torna-se um diferencial crítico na prática moderna, especialmente em cenários de engenharia de backend de alta complexidade. Ao projetar soluções escaláveis, como produtos white-label que exigem suporte a múltiplas aplicações a partir de um único backend, ou ao orquestrar a resiliência em arquiteturas orientadas a eventos utilizando sagas coreografadas, as diretrizes rígidas do passado atuariam como bloqueios severos. Em contraste, as práticas atualizadas do ITIL v4 fornecem as diretrizes necessárias para garantir a integridade dos dados e a continuidade da operação sem sufocar a velocidade do desenvolvimento e da entrega contínua.

Em suma, o ITIL v4 moderniza a Gestão de Serviços de TI ao consolidar a premissa de que a governança, o alinhamento estratégico com o negócio e a inovação tecnológica em alta velocidade podem e devem coexistir harmoniosamente. Ao adotar essa abordagem sistêmica e adaptável, as equipes de tecnologia são plenamente capacitadas não apenas para sustentar as operações diárias, mas para atuar como as verdadeiras impulsionadoras do sucesso corporativo a longo prazo.

---

## 9. REFERÊNCIAS BIBLIOGRÁFICAS

ALMEIDA, Júlia Maria Silva. **Framework ITIL em sua etapa operação de serviços e associação com BPM: análises em um contexto de implementação de um módulo ERP.** Monografia (Bacharelado em Administração) - Instituto de Ciências Sociais Aplicadas, Universidade Federal de Ouro Preto, Mariana, 2022.

ATLASSIAN. **ITIL Continual Service Improvement (CSI).** Atlassian, 2024. Disponível em: https://www.atlassian.com/itsm/itil/continual-service-improvement. Acesso em: 27 maio. 2026.

CENTRAL IT. **ITIL 4: O Que é, Principais Mudanças e Certificações.** Brasília: Central IT, 2025. Disponível em: https://centralit.com.br/itil-4. Acesso em: 27 maio. 2026.

FRESHWORKS. **Tudo sobre ITIL: O que é, Metodologias e Processos.** Freshworks Inc., 2024. Disponível em: https://www.freshworks.com/br/freshservice/itil. Acesso em: 27 maio. 2026.

INTERNATIONAL IT. **ITIL 4: Conheça os 7 Princípios Orientadores.** International IT, 2022. Disponível em: https://www.internationalit.com/post/itil-4-conhe%C3%A7a-os-7-princ%C3%ADpios-orientadores. Acesso em: 27 maio. 2026.

ITSMF UK. **An Introductory Overview of ITIL® 2011.** Londres: The Stationery Office (TSO), 2012.

PEOPLECERT. **Atualização para ITIL 4: Fortalecendo a Segurança da Informação na Administração Pública Federal.** Axelos Global Best Practice / IT Partners, 2024. Disponível em: https://www.gov.br/gsi/pt-br/seguranca-da-informacao-e-cibernetica/eventos-anteriores/240924WebinariodeSeguranadaInformao.pdf. Acesso em: 27 maio. 2026.

ZLURI. **IT Governance in 2026: A Comprehensive Guide.** Zluri, 2026. Disponível em: https://www.zluri.com/blog/it-governance. Acesso em: 27 maio. 2026.
