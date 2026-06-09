---
theme: seriph
title: "ITIL v4 - Frameworks de Governanca e Gestao de TI"
layout: default
info: |
  Apresentacao academica sobre os conceitos fundamentais do ITIL v4.
  Instituto Federal de Goias - Campus Goiania.
transition: slide-left
drawings:
  persist: false
duration: 40min
colorSchema: light
fonts:
  sans: Inter
  serif: Playfair Display
  mono: Fira Code
---

<div class="flex flex-col items-center justify-center h-full text-center">
  <h1 class="!text-4xl">Frameworks de Governança e Gestão de TI</h1>
  <h2 class="!text-2xl !mt-2">ITIL v4</h2>
  <div class="mt-10 text-sm text-gray-500 space-y-1">
    <p>Filipe Moreira Coelho · Julia Monteiro de Oliveira · Victor Hugo Vieira Cruz</p>
    <p class="text-xs">Prof.º Ariel Cardoso Mendes | Gestão e Governança em TI</p>
    <p class="text-xs text-gray-400">Goiânia/GO | 2026/1</p>
  </div>
</div>

---
layout: default
---

# Introdução

<div class="mt-6 space-y-6">

<div v-click>

A **Tecnologia da Informação** deixou de ser suporte operacional e se tornou **recurso estratégico** para inovação e sobrevivência das organizações.

</div>

<div v-click>

A **Gestão de Serviços de TI (ITSM)** garante que os serviços tecnológicos estejam alinhados às necessidades do negócio, suportando operações e impulsionando a transformação organizacional.

</div>

<div v-click>

O **ITIL** se consolidou como o framework público **mais reconhecido e adotado mundialmente** para orientar essa gestão.

</div>

</div>

<div v-click class="absolute bottom-12 left-12 right-12">
  <div class="border-l-2 border-gray-300 pl-4 text-sm text-gray-500 italic">
    "A eficácia de um serviço de TI é medida pela sua capacidade de traduzir recursos técnicos em resultados práticos e mensuráveis para o negócio."
  </div>
</div>

---
layout: two-cols
layoutClass: gap-12
---

# Do ITIL v3 ao ITIL v4

<div class="mt-4 space-y-4 text-sm">

<div v-click>

**ITIL v3/2011** estruturava-se em **5 fases sequenciais** do ciclo de vida:

1. Estratégia de Serviço
2. Desenho de Serviço
3. Transição de Serviço
4. Operação de Serviço
5. Melhoria Contínua

</div>

<div v-click>

Modelo linear e altamente processual que enfrentou desafios de velocidade frente à rápida evolução do mercado.

</div>

</div>

::right::

<div class="mt-16"></div>

<div v-click class="space-y-4 text-sm">

**ITIL v4** representa uma **mudança de paradigma**:

<div class="space-y-3 mt-3">
  <div class="flex items-start gap-2">
    <span class="text-green-600 font-bold mt-0.5">→</span>
    <span>Abandona a visão rígida baseada em ciclo de vida</span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-green-600 font-bold mt-0.5">→</span>
    <span>Modelo <strong>ágil, sistêmico e modular</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-green-600 font-bold mt-0.5">→</span>
    <span>Foco na <strong>co-criação de valor</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-green-600 font-bold mt-0.5">→</span>
    <span>Integração com <strong>Agile, Lean e DevOps</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-green-600 font-bold mt-0.5">→</span>
    <span>Governança como <strong>facilitadora</strong>, não como gargalo</span>
  </div>
</div>

</div>

---
layout: section
---

<div class="text-center">
  <span class="text-sm tracking-widest uppercase text-gray-400">Parte 01</span>
  <h1 class="!text-4xl mt-4">O Conceito de Serviço e Valor</h1>
  <div class="w-12 h-0.5 bg-gray-800 mx-auto mt-4"></div>
</div>

---
layout: default
---

# O que é um Serviço?

<div class="mt-8 space-y-6">

<div v-click>

> Um **serviço** é um meio de permitir a **entrega de valor** aos clientes, facilitando a obtenção dos resultados que desejam alcançar, **sem que precisem assumir custos e riscos específicos**.

</div>

<div v-click class="mt-8">

### Co-criação de Valor no ITIL v4

O valor **não é uma mercadoria estática** entregue unidirecionalmente. É o resultado de uma **parceria dinâmica e colaborativa** entre provedor, consumidor e demais partes interessadas.

</div>

<div v-click class="mt-6 flex justify-center">

```mermaid {scale: 0.75}
graph LR
    A[Provedor de Servico] -- Entrega recursos --> C((Valor))
    B[Consumidor] -- Define necessidades --> C
    A <-- Co-criacao --> B
    style C fill:#f0f0f0,stroke:#333,stroke-width:2px,color:#333
```

</div>

</div>

---
layout: default
---

# Utilidade e Garantia

<div class="mt-4 text-sm text-gray-500 mb-6">Os dois pilares que sustentam o valor de um serviço</div>

<div class="grid grid-cols-2 gap-8 mt-4">
  <div v-click class="border border-gray-200 rounded-lg p-6">
    <h3 class="text-xl font-bold mb-1">Utilidade</h3>
    <p class="text-xs text-gray-400 italic mb-4">Fit for Purpose - Adequação ao Propósito</p>
    <p class="text-sm"><strong>O que</strong> o serviço faz</p>
    <div class="mt-4 space-y-2 text-sm text-gray-600">
      <div class="flex items-start gap-2">
        <span class="text-gray-400">•</span>
        <span>Melhora o desempenho do cliente</span>
      </div>
      <div class="flex items-start gap-2">
        <span class="text-gray-400">•</span>
        <span>Remove restrições e limitações</span>
      </div>
      <div class="flex items-start gap-2">
        <span class="text-gray-400">•</span>
        <span>Suporta os resultados desejados</span>
      </div>
    </div>
  </div>
  <div v-click class="border border-gray-200 rounded-lg p-6">
    <h3 class="text-xl font-bold mb-1">Garantia</h3>
    <p class="text-xs text-gray-400 italic mb-4">Fit for Use - Adequação ao Uso</p>
    <p class="text-sm"><strong>Como</strong> o serviço é entregue</p>
    <div class="mt-4 space-y-2 text-sm text-gray-600">
      <div class="flex items-start gap-2">
        <span class="text-gray-400">•</span>
        <span><strong>Disponibilidade</strong> - está acessível quando necessário</span>
      </div>
      <div class="flex items-start gap-2">
        <span class="text-gray-400">•</span>
        <span><strong>Capacidade</strong> - suporta a demanda exigida</span>
      </div>
      <div class="flex items-start gap-2">
        <span class="text-gray-400">•</span>
        <span><strong>Continuidade</strong> - opera em cenários adversos</span>
      </div>
      <div class="flex items-start gap-2">
        <span class="text-gray-400">•</span>
        <span><strong>Segurança</strong> - protege dados e informações</span>
      </div>
    </div>
  </div>
</div>

<div v-click class="mt-6 text-center text-sm bg-gray-50 rounded-lg py-3 px-4">
  <strong>Valor = Utilidade + Garantia</strong> - Uma funcionalidade excelente perde seu propósito se não for confiável, segura e escalável.
</div>

---
layout: section
---

<div class="text-center">
  <span class="text-sm tracking-widest uppercase text-gray-400">Parte 02</span>
  <h1 class="!text-4xl mt-4">O Sistema de Valor de Serviço</h1>
  <p class="text-lg text-gray-500 mt-2">Service Value System (SVS)</p>
  <div class="w-12 h-0.5 bg-gray-800 mx-auto mt-4"></div>
</div>

---
layout: default
---

# O que é o SVS?

<div class="mt-6 space-y-5">

<div v-click>

O **Sistema de Valor de Serviço (SVS)** é a arquitetura central do ITIL v4. Descreve como **todos os componentes e atividades** de uma organização trabalham juntos para habilitar a **criação de valor**.

</div>

<div v-click>

Propõe uma **visão unificada e flexível** que supera os silos departamentais dos modelos tradicionais.

</div>

<div v-click class="mt-4">

```mermaid {scale: 0.65}
graph LR
    O[Oportunidade] --> PO[Principios]
    D[Demanda] --> PO
    PO --> G[Governanca]
    G --> CVS[Cadeia de Valor]
    CVS --> P[Praticas]
    P --> MC[Melhoria Continua]
    MC --> V((Valor))
    style V fill:#f0f0f0,stroke:#333,stroke-width:2px,color:#333
```

</div>

</div>

---
layout: default
---

# Os 5 Componentes do SVS

<div class="mt-6 space-y-4">

<div v-click class="flex items-start gap-4 border-l-2 border-gray-300 pl-4">
  <span class="text-lg font-bold text-gray-300 w-6">1</span>
  <div>
    <p class="font-semibold">Princípios Orientadores</p>
    <p class="text-sm text-gray-500">Recomendações universais que guiam decisões - focar no valor, pensar holisticamente, otimizar e automatizar.</p>
  </div>
</div>

<div v-click class="flex items-start gap-4 border-l-2 border-gray-300 pl-4">
  <span class="text-lg font-bold text-gray-300 w-6">2</span>
  <div>
    <p class="font-semibold">Governança</p>
    <p class="text-sm text-gray-500">Alinha operações tecnológicas à direção estratégica - conformidade, segurança, riscos e monitoramento de desempenho.</p>
  </div>
</div>

<div v-click class="flex items-start gap-4 border-l-2 border-gray-300 pl-4">
  <span class="text-lg font-bold text-gray-300 w-6">3</span>
  <div>
    <p class="font-semibold">Cadeia de Valor de Serviço</p>
    <p class="text-sm text-gray-500">Motor de transformação - 6 atividades interconectadas combináveis de infinitas maneiras.</p>
  </div>
</div>

<div v-click class="flex items-start gap-4 border-l-2 border-gray-300 pl-4">
  <span class="text-lg font-bold text-gray-300 w-6">4</span>
  <div>
    <p class="font-semibold">Práticas de Gestão</p>
    <p class="text-sm text-gray-500">34 conjuntos de recursos organizacionais - ferramentas, habilidades e procedimentos para trabalhos específicos.</p>
  </div>
</div>

<div v-click class="flex items-start gap-4 border-l-2 border-gray-300 pl-4">
  <span class="text-lg font-bold text-gray-300 w-6">5</span>
  <div>
    <p class="font-semibold">Melhoria Contínua</p>
    <p class="text-sm text-gray-500">Permeia transversalmente todo o SVS - organismo adaptável que aprende e evolui constantemente.</p>
  </div>
</div>

</div>

---
layout: default
---

# Os 7 Princípios Orientadores

<div class="text-xs text-gray-500 mb-2">Bússola comportamental aplicável independente de mudanças em tecnologias ou estruturas</div>

<div class="grid grid-cols-2 gap-2 mb-8">
  <div v-click class="px-3 py-2 bg-gray-50 rounded">
    <p class="font-semibold text-sm !my-0">1. Focar no Valor</p>
    <p class="text-xs text-gray-500 !my-0">Tudo deve mapear para valor para as partes interessadas</p>
  </div>
  <div v-click class="px-3 py-2 bg-gray-50 rounded">
    <p class="font-semibold text-sm !my-0">2. Começar de Onde Está</p>
    <p class="text-xs text-gray-500 !my-0">Avaliar o estado atual antes de criar algo novo</p>
  </div>
  <div v-click class="px-3 py-2 bg-gray-50 rounded">
    <p class="font-semibold text-sm !my-0">3. Progredir Iterativamente com Feedback</p>
    <p class="text-xs text-gray-500 !my-0">Iterar com ciclos menores e feedback constante</p>
  </div>
  <div v-click class="px-3 py-2 bg-gray-50 rounded">
    <p class="font-semibold text-sm !my-0">4. Colaborar e Promover Visibilidade</p>
    <p class="text-xs text-gray-500 !my-0">Trabalho colaborativo e transparente gera melhores resultados</p>
  </div>
  <div v-click class="px-3 py-2 bg-gray-50 rounded">
    <p class="font-semibold text-sm !my-0">5. Pensar e Trabalhar Holisticamente</p>
    <p class="text-xs text-gray-500 !my-0">Nenhum serviço ou componente opera isoladamente</p>
  </div>
  <div v-click class="px-3 py-2 bg-gray-50 rounded">
    <p class="font-semibold text-sm !my-0">6. Manter Simples e Prático</p>
    <p class="text-xs text-gray-500 !my-0">Eliminar o que não agrega valor; usar o mínimo de passos</p>
  </div>
  <div v-click class="col-span-2 px-3 py-2 bg-gray-50 rounded text-center">
    <p class="font-semibold text-sm !my-0">7. Otimizar e Automatizar</p>
    <p class="text-xs text-gray-500 !my-0">Maximizar o valor do trabalho humano e automatizar tarefas repetitivas</p>
  </div>
</div>

---
layout: section
---

<div class="text-center">
  <span class="text-sm tracking-widest uppercase text-gray-400">Parte 03</span>
  <h1 class="!text-4xl mt-4">Cadeia de Valor de Serviço</h1>
  <p class="text-lg text-gray-500 mt-2">Service Value Chain</p>
  <div class="w-12 h-0.5 bg-gray-800 mx-auto mt-4"></div>
</div>

---
layout: default
---

# A Ruptura Metodológica

<div class="mt-6 space-y-5">

<div v-click>

No **ITIL v3**, as práticas eram estruturadas em torno de um **ciclo de vida linear** - uma cascata sequencial que limitava a agilidade.

</div>

<div v-click>

O **ITIL v4** substitui esse fluxo por um **modelo operacional flexível** em formato de rede, onde os blocos de construção não seguem uma ordem predeterminada.

</div>

<div v-click class="grid grid-cols-2 gap-8 mt-6">
  <div class="text-center">
    <p class="text-sm font-semibold text-gray-400 mb-3">ITIL v3 - Linear</p>

```mermaid {scale: 0.5}
graph LR
    E[Estrategia] --> D[Desenho] --> T[Transicao] --> O[Operacao] --> M[Melhoria]
```

  </div>
  <div class="text-center">
    <p class="text-sm font-semibold text-gray-400 mb-3">ITIL v4 - Rede Flexivel</p>

```mermaid {scale: 0.5}
graph TD
    P[Planejar] <--> E[Engajar]
    P <--> DT[Desenhar/Transitar]
    E <--> OC[Obter/Construir]
    DT <--> OC
    OC <--> ES[Entregar/Suportar]
    E <--> ES
    M[Melhorar] <--> P
    M <--> DT
    M <--> ES
```

  </div>
</div>

</div>

---
layout: default
---

# As 6 Atividades da Cadeia de Valor

<div class="mt-6 space-y-3">

<div v-click class="flex items-start gap-4 py-2 border-b border-gray-100">
  <span class="font-bold text-gray-300 w-32 text-sm shrink-0">Planejar</span>
  <p class="text-sm">Assegura visão compartilhada do <strong>status atual</strong> e da <strong>direção estratégica</strong> em toda a organização.</p>
</div>

<div v-click class="flex items-start gap-4 py-2 border-b border-gray-100">
  <span class="font-bold text-gray-300 w-32 text-sm shrink-0">Melhorar</span>
  <p class="text-sm">Atua de forma <strong>onipresente</strong> para otimizar o desempenho de todas as outras atividades.</p>
</div>

<div v-click class="flex items-start gap-4 py-2 border-b border-gray-100">
  <span class="font-bold text-gray-300 w-32 text-sm shrink-0">Engajar</span>
  <p class="text-sm">Porta de entrada para o relacionamento - garante <strong>compreensão contínua</strong> das necessidades de todas as partes interessadas.</p>
</div>

<div v-click class="flex items-start gap-4 py-2 border-b border-gray-100">
  <span class="font-bold text-gray-300 w-32 text-sm shrink-0">Desenhar e Transitar</span>
  <p class="text-sm">Certifica que os serviços atendam às expectativas de <strong>custo, qualidade e tempo</strong> para o lançamento.</p>
</div>

<div v-click class="flex items-start gap-4 py-2 border-b border-gray-100">
  <span class="font-bold text-gray-300 w-32 text-sm shrink-0">Obter / Construir</span>
  <p class="text-sm">Lida com <strong>aquisição, codificação ou integração</strong> de componentes reais de infraestrutura e software.</p>
</div>

<div v-click class="flex items-start gap-4 py-2">
  <span class="font-bold text-gray-300 w-32 text-sm shrink-0">Entregar e Suportar</span>
  <p class="text-sm">Garante que os serviços sejam <strong>operados conforme as garantias</strong> acordadas com o cliente.</p>
</div>

</div>

---
layout: default
---

# Fluxos de Valor - Value Streams

<div class="mt-6 space-y-5">

<div v-click>

Enquanto a Cadeia de Valor fornece as **peças do quebra-cabeça**, um **Fluxo de Valor** é a sequência específica de passos que a organização orquestra para responder a um **cenário real**.

</div>

<div v-click class="grid grid-cols-2 gap-6 mt-6">
  <div class="border border-gray-200 rounded-lg p-5">
    <p class="font-semibold text-sm mb-3">Exemplo: Incidente em Produção</p>
    <p class="text-xs text-gray-500 mb-3">Queda de banco de dados</p>
    <div class="space-y-1 text-sm">
      <div class="flex items-center gap-2">
        <span class="text-red-400 font-bold">→</span>
        <span><strong>Engajar</strong> o usuário</span>
      </div>
      <div class="flex items-center gap-2">
        <span class="text-red-400 font-bold">→</span>
        <span><strong>Entregar e Suportar</strong> a correção</span>
      </div>
      <p class="text-xs text-gray-400 mt-2 italic">Caminho emergencial e focado</p>
    </div>
  </div>
  <div class="border border-gray-200 rounded-lg p-5">
    <p class="font-semibold text-sm mb-3">Exemplo: Nova Arquitetura</p>
    <p class="text-xs text-gray-500 mb-3">Implantação de novo software</p>
    <div class="space-y-1 text-sm">
      <div class="flex items-center gap-2">
        <span class="text-blue-400 font-bold">→</span>
        <span><strong>Desenhar e Transitar</strong> ciclos iterativos</span>
      </div>
      <div class="flex items-center gap-2">
        <span class="text-blue-400 font-bold">→</span>
        <span><strong>Obter/Construir</strong> componentes</span>
      </div>
      <p class="text-xs text-gray-400 mt-2 italic">Ciclos repetitivos e planejados</p>
    </div>
  </div>
</div>

</div>

<div v-click class="mt-6 text-sm bg-gray-50 rounded-lg py-3 px-4">
  Essa mecânica garante que os <strong>controles de governança não se tornem burocracias universais</strong>, permitindo adaptação ao contexto de cada demanda em harmonia com metodologias ágeis e CI/CD.
</div>

---
layout: section
---

<div class="text-center">
  <span class="text-sm tracking-widest uppercase text-gray-400">Parte 04</span>
  <h1 class="!text-4xl mt-4">As 4 Dimensões da<br/>Gestão de Serviços</h1>
  <div class="w-12 h-0.5 bg-gray-800 mx-auto mt-4"></div>
</div>

---
layout: default
---

# Visão Holística

<div class="mt-4 text-sm text-gray-500 mb-6">
Evolução dos antigos "4 Ps" (Pessoas, Produtos, Processos e Parceiros) - agora aplicáveis transversalmente a todo o SVS.
</div>

<div class="grid grid-cols-2 gap-6">
  <div v-click class="border border-gray-200 rounded-lg p-5">
    <div class="flex items-center gap-2 mb-3">
      <span class="text-xl">1</span>
      <h3 class="font-semibold">Organizações e Pessoas</h3>
    </div>
    <p class="text-sm text-gray-600">Estruturas organizacionais, papéis, cultura corporativa, competências e canais de comunicação para operação colaborativa.</p>
  </div>
  <div v-click class="border border-gray-200 rounded-lg p-5">
    <div class="flex items-center gap-2 mb-3">
      <span class="text-xl">2</span>
      <h3 class="font-semibold">Informação e Tecnologia</h3>
    </div>
    <p class="text-sm text-gray-600">Conhecimento, dados, ferramentas, infraestrutura (cloud, microsserviços), segurança da informação e conformidade regulatória.</p>
  </div>
  <div v-click class="border border-gray-200 rounded-lg p-5">
    <div class="flex items-center gap-2 mb-3">
      <span class="text-xl">3</span>
      <h3 class="font-semibold">Parceiros e Fornecedores</h3>
    </div>
    <p class="text-sm text-gray-600">Ecossistema de relacionamentos, contratos de suporte, integração de terceiros e otimização de processos com parceiros externos.</p>
  </div>
  <div v-click class="border border-gray-200 rounded-lg p-5">
    <div class="flex items-center gap-2 mb-3">
      <span class="text-xl">4</span>
      <h3 class="font-semibold">Fluxos de Valor e Processos</h3>
    </div>
    <p class="text-sm text-gray-600">Como as partes da organização trabalham coordenadamente - identificar desperdícios, otimizar tarefas e acelerar entregas.</p>
  </div>
</div>

---
layout: default
---

# As 4 Dimensões e os Fatores Externos

<div class="mt-6">

<div v-click>

A gestão de serviços é **constantemente influenciada por pressões externas** que fogem ao controle direto da organização.

</div>

<div v-click class="mt-6 flex justify-center">

```mermaid {scale: 0.46}
graph LR
    P[Politicos] --> D1[Org. e Pessoas]
    S[Sociais] --> D1
    T[Tecnologicos] --> D2[Info. e Tecnologia]
    E[Economicos] --> D3[Parceiros e Fornecedores]
    A[Ambientais] --> D3
    L[Legais] --> D4[Fluxos e Processos]
```

</div>

</div>

<div v-click class="mt-4 text-xs bg-gray-50 rounded-lg py-2 px-4">
  O modelo <strong>PESTLE</strong> mapeia como variáveis externas moldam conformidade regulatória, preferências dos consumidores e restrições financeiras, mantendo as dimensões ágeis e resilientes.
</div>

---
layout: section
---

<div class="text-center">
  <span class="text-sm tracking-widest uppercase text-gray-400">Parte 05</span>
  <h1 class="!text-4xl mt-4">Práticas de Gestão</h1>
  <p class="text-lg text-gray-500 mt-2">A Evolução dos "Processos"</p>
  <div class="w-12 h-0.5 bg-gray-800 mx-auto mt-4"></div>
</div>

---
layout: two-cols
layoutClass: gap-12
---

# De Processos a Práticas

<div class="mt-4 space-y-4 text-sm">

<div v-click>

**Antes (ITIL v3)**
- Processo = conjunto estruturado de atividades com entradas e saídas definidas
- Garantia de previsibilidade, mas frequentemente gerava **fluxos isolados e burocráticos**

</div>

<div v-click>

**Agora (ITIL v4)**
- Prática = conjunto de **recursos organizacionais** desenhados para atingir um objetivo integrado à criação de valor
- Combina: ferramentas tecnológicas + habilidades humanas + procedimentos de fluxo de trabalho

</div>

</div>

::right::

<div class="mt-16"></div>

<div v-click class="border border-gray-200 rounded-lg p-6">
  <p class="font-semibold mb-4">Mudança fundamental</p>
  <p class="text-sm text-gray-600">Um fluxo de atividades (processo) é <strong>insuficiente</strong> se não for suportado por:</p>
  <div class="mt-4 space-y-3 text-sm">
    <div class="flex items-center gap-3">
      <div class="w-2 h-2 rounded-full bg-gray-400"></div>
      <span>Habilidades das <strong>pessoas</strong></span>
    </div>
    <div class="flex items-center gap-3">
      <div class="w-2 h-2 rounded-full bg-gray-400"></div>
      <span>Ferramentas <strong>tecnológicas</strong> adequadas</span>
    </div>
    <div class="flex items-center gap-3">
      <div class="w-2 h-2 rounded-full bg-gray-400"></div>
      <span><strong>Parceiros</strong> estratégicos</span>
    </div>
  </div>
  <p class="text-xs text-gray-400 mt-4 italic">Integra as 4 dimensões em cada unidade de trabalho.</p>
</div>

---
layout: default
---

# As 34 Práticas - 3 Categorias

<div class="mt-6 space-y-5">

<div v-click class="border-l-4 border-gray-700 pl-5 py-2">
  <h3 class="font-semibold">Práticas Gerais de Gestão</h3>
  <p class="text-sm text-gray-500 mt-1">Herdadas de domínios corporativos mais amplos</p>
  <p class="text-xs text-gray-400 mt-2">Gestão de estratégia, arquitetura corporativa, gestão de riscos, gestão de portfólio, gestão financeira, gestão de talentos, entre outras.</p>
</div>

<div v-click class="border-l-4 border-gray-500 pl-5 py-2">
  <h3 class="font-semibold">Práticas de Gestão de Serviços</h3>
  <p class="text-sm text-gray-500 mt-1">Evolução dos processos clássicos de suporte e operação</p>
  <p class="text-xs text-gray-400 mt-2">Gerenciamento de incidentes, problemas, requisições, nível de serviço, catálogo de serviços, central de serviço, habilitação de mudança, entre outras.</p>
  <div class="mt-2 bg-gray-50 rounded px-3 py-2">
    <p class="text-xs"><strong>Destaque:</strong> "Gerenciamento de mudanças" → <strong>"Habilitação de Mudança"</strong> (<em>Change Enablement</em>).<br/>Viabiliza entregas seguras em CI/CD, abandonando comitês de aprovação demorados.</p>
  </div>
</div>

<div v-click class="border-l-4 border-gray-300 pl-5 py-2">
  <h3 class="font-semibold">Práticas de Gestão Técnica</h3>
  <p class="text-sm text-gray-500 mt-1">Disciplinas de engenharia integradas ao framework</p>
  <p class="text-xs text-gray-400 mt-2">Gerenciamento de implantação, gerenciamento de infraestrutura e plataforma, desenvolvimento e gerenciamento de software.</p>
</div>

</div>

---
layout: default
---

# Práticas como Blocos Combináveis

<div class="mt-6">

<div v-click>

As práticas **não operam como etapas sequenciais** - funcionam como um **repositório de recursos e capacidades** que a organização combina dinamicamente para construir seus Fluxos de Valor.

</div>

<div v-click class="mt-6 flex justify-center">

```mermaid {scale: 0.6}
graph LR
    FV[Fluxo de Valor] --> P1[Gestao de Incidentes]
    FV --> P2[Central de Servico]
    FV --> P3[Habilitacao de Mudanca]
    FV --> P4[Ger. de Implantacao]
    FV --> P5[Monitoramento]
    P1 --> R((Resposta))
    P2 --> R
    P3 --> R
    P4 --> R
    P5 --> R
    style R fill:#f0f0f0,stroke:#333,stroke-width:2px,color:#333
```

</div>

</div>

<div v-click class="mt-4 text-sm text-center text-gray-500">
  Cada fluxo de valor seleciona apenas as práticas necessárias - garantindo uma resposta <strong>resiliente e adequada</strong> ao contexto.
</div>

---
layout: section
---

<div class="text-center">
  <span class="text-sm tracking-widest uppercase text-gray-400">Parte 06</span>
  <h1 class="!text-4xl mt-4">Melhoria Contínua</h1>
  <div class="w-12 h-0.5 bg-gray-800 mx-auto mt-4"></div>
</div>

---
layout: default
---

# Uma Força Onipresente

<div class="mt-6 space-y-5">

<div v-click>

A Melhoria Contínua **transcende a ideia de etapa conclusiva** - é uma força direcional em toda a organização.

</div>

<div v-click>

No ITIL v4, ela é simultaneamente:
- Um **componente transversal** do SVS
- Uma **prática de gestão dedicada**

Aplicável a todos os elementos: governança, cadeia de valor, práticas e ferramentas.

</div>

<div v-click>

> A melhoria **não é um projeto temporário** acionado quando algo falha - é uma **atividade de rotina** incorporada à cultura organizacional.

</div>

</div>

---
layout: default
---

# Modelo de Melhoria Contínua

<div class="mt-4 text-sm text-gray-500 mb-4">Evolução estruturada que contrasta a posição atual com os objetivos de longo prazo</div>

<div class="flex justify-center mt-2">

```mermaid {scale: 0.43}
graph TD
    A["1. Qual e a visao?"] --> B["2. Onde estamos agora?"]
    B --> C["3. Onde queremos chegar?"]
    C --> D["4. Como chegaremos la?"]
    D --> E["5. Tomar a acao"]
    E --> F["6. Chegamos la?"]
    F --> G["7. Como manter o impulso?"]
    G --> A
    style A fill:#f5f5f5,stroke:#333,color:#333
    style G fill:#f5f5f5,stroke:#333,color:#333
```

</div>

<div v-click class="mt-4 text-sm bg-gray-50 rounded-lg py-3 px-4 text-center">
  Em ambientes ágeis e de entrega contínua, esse modelo garante que os fluxos de valor <strong>não fiquem estagnados</strong> - a TI aprende continuamente com seus gargalos e otimiza suas arquiteturas.
</div>

---
layout: default
---

# Melhoria Contínua na Prática

<div class="mt-6">

<div v-click class="grid grid-cols-3 gap-5">
  <div class="border border-gray-200 rounded-lg p-4 text-center">
    <p class="font-semibold text-sm mb-2">Nível Estratégico</p>
    <p class="text-xs text-gray-500">Alinhamento entre TI e objetivos de negócio. Revisão de portfólio de serviços.</p>
  </div>
  <div class="border border-gray-200 rounded-lg p-4 text-center">
    <p class="font-semibold text-sm mb-2">Nível Tático</p>
    <p class="text-xs text-gray-500">Otimização de processos e práticas. Revisão de SLAs e indicadores de desempenho.</p>
  </div>
  <div class="border border-gray-200 rounded-lg p-4 text-center">
    <p class="font-semibold text-sm mb-2">Nível Operacional</p>
    <p class="text-xs text-gray-500">Aprimoramento diário de atividades. Análise de incidentes e problemas recorrentes.</p>
  </div>
</div>

</div>

<div v-click class="mt-8 space-y-3">
  <p class="font-semibold text-sm">Características-chave:</p>
  <div class="grid grid-cols-2 gap-4 text-sm">
    <div class="flex items-center gap-2">
      <span class="text-gray-400">•</span>
      <span>Aprendizado constante com falhas operacionais</span>
    </div>
    <div class="flex items-center gap-2">
      <span class="text-gray-400">•</span>
      <span>Otimização contínua de entregas</span>
    </div>
    <div class="flex items-center gap-2">
      <span class="text-gray-400">•</span>
      <span>Evolução na velocidade do mercado</span>
    </div>
    <div class="flex items-center gap-2">
      <span class="text-gray-400">•</span>
      <span>Registro centralizado de oportunidades (CIR)</span>
    </div>
  </div>
</div>

---
layout: default
---

# Conclusão

<div class="mt-6 space-y-5">

<div v-click>

O **ITIL v4** representa um marco na adequação da gestão de serviços à realidade tecnológica contemporânea.

</div>

<div v-click>

**Principais transformações:**

<div class="grid grid-cols-2 gap-4 mt-3 text-sm">
  <div class="flex items-start gap-2">
    <span class="text-gray-400 font-bold">→</span>
    <span>De ciclo de vida linear para o <strong>SVS flexível</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-gray-400 font-bold">→</span>
    <span>De entrega unilateral para <strong>co-criação de valor</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-gray-400 font-bold">→</span>
    <span>De processos rígidos para <strong>práticas integradas</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-gray-400 font-bold">→</span>
    <span>De silos departamentais para <strong>4 dimensões holísticas</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-gray-400 font-bold">→</span>
    <span>De melhoria como fase para <strong>melhoria como cultura</strong></span>
  </div>
  <div class="flex items-start gap-2">
    <span class="text-gray-400 font-bold">→</span>
    <span>De governança como barreira para <strong>governança como facilitadora</strong></span>
  </div>
</div>

</div>

<div v-click class="mt-6 border-l-2 border-gray-300 pl-4 text-sm text-gray-500 italic">
  "Governança, alinhamento estratégico com o negócio e inovação tecnológica em alta velocidade podem e devem coexistir harmoniosamente."
</div>

</div>