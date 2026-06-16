## CAPÍTULO 3 — Estrutura Analítica do Projeto (EAP) e Dicionário da EAP

### 3.1 O que é a EAP

**EAP** = **E**strutura **A**nalítica do **P**rojeto (em inglês: WBS — *Work Breakdown Structure*). É uma decomposição hierárquica de **todo** o trabalho que o projeto precisa realizar. Não é uma lista de tarefas — é uma árvore de **entregas**.

**Regras fundamentais da EAP (cobradas em prova):**
- Orientada a **entregas**, não a atividades. Cada nó é "o que será entregue", não "o que alguém vai fazer".
- A regra dos **100%**: a soma dos filhos deve cobrir 100% do trabalho do pai. Não pode sobrar nem faltar.
- **Mínimo de 3 níveis** de profundidade (requisito da disciplina). No nosso caso: Nível 1 = área (ex: "3.0 Desenvolvimento"), Nível 2 = subárea (ex: "3.2 Backend"), Nível 3 = pacote de trabalho (ex: "3.2.3 API de Reservas").
- Os nós folha (último nível) são chamados **pacotes de trabalho** — é a menor unidade gerenciável.

### 3.1.1 Por que a EAP foi dividida em 4 grandes áreas

| Área | Justificativa |
|------|---------------|
| **1.0 Gerenciamento** | Todo projeto de software precisa de planejamento formal antes de codificar (PMBOK). Inclui TAP, escopo, cronograma. |
| **2.0 Design/UX** | O protótipo precisa ser aprovado antes do desenvolvimento — é uma premissa do projeto (seção 2.8). Sem protótipo aprovado, não se começa a desenvolver. |
| **3.0 Desenvolvimento** | O produto em si. Dividido em BD, Backend, Mobile e Web porque são 4 "frentes" tecnológicas com responsáveis diferentes. |
| **4.0 Testes e Implantação** | Garantia de qualidade + deploy. Separado porque depende de todas as frentes estarem prontas. |

### 3.1.2 Por que o Desenvolvimento (3.0) tem 4 sub-ramos

- **3.1 Banco de Dados** — precisa existir antes de qualquer API. É pré-requisito técnico.
- **3.2 Backend (API)** — camada de lógica de negócio. Dividida em 4 APIs porque cada uma atende um domínio funcional diferente (autenticação, busca, reservas, administração).
- **3.3 Mobile** — consome as APIs. Pode ser desenvolvido em paralelo com o backend (usando mocks).
- **3.4 Web** — também consome as APIs, mas é um produto separado do mobile (público diferente: admin vs jogador).

### 3.2 O Dicionário da EAP

O dicionário existe para **eliminar ambiguidade**. Cada pacote de trabalho tem 4 campos:

| Campo | O que responde | Por que é necessário |
|-------|----------------|----------------------|
| **Descrição** | "O que exatamente é isso?" | Sem descrição, "API de Busca" pode significar coisas diferentes para pessoas diferentes |
| **Critério de Aceitação** | "Como sei que está pronto?" | Impede entrega parcial ou subjetiva. Ex: "resposta em até 3 segundos" é mensurável |
| **Responsável** | "Quem responde por isso?" | GP = Gerente de Projeto. A sigla aparece na coluna "Resp." |

**Siglas da coluna Responsável:**
- **GP** = Gerente de Projeto (Victor/Filipe)
- **Dev. Backend** = Desenvolvedor Backend
- **Dev. Mobile** = Desenvolvedor Mobile
- **Dev. Web** = Desenvolvedor Web/Frontend
- **Designer** = Responsável por UX/UI
- **Todos** = Responsabilidade compartilhada

**Observações sobre critérios de aceitação específicos que podem gerar perguntas:**
- **3.1.3** (Procedures e Índices): o critério é "testes de concorrência passam sem perda de dados" — isso existe porque o problema central do QuadraLivre é evitar que duas pessoas reservem o mesmo horário. As *procedures* no banco garantem atomicidade (ou a reserva é feita por inteiro, ou não é feita).
- **3.2.1** (API Autenticação): "95% dos testes passam" e não 100% — porque em sistemas reais, edge cases como timeout de rede podem causar falhas legítimas que não são bugs do sistema.
- **3.4.4** (Grade/Bloqueios Web): "reflete no app em até 10 segundos" — tempo de propagação entre o admin bloquear um horário e o jogador ver a mudança no celular. É uma métrica de *consistência eventual*.

**CRUD** (sigla que pode aparecer em pergunta): **C**reate, **R**ead, **U**pdate, **D**elete — as 4 operações básicas de manipulação de dados.

---

## CAPÍTULO 4 — Cronograma de Atividades e Caminho Crítico (CPM)

### 4.1 Lista de Atividades

Cada pacote de trabalho da EAP (nível 3) virou uma **atividade** no cronograma. A diferença conceitual:
- **Pacote de trabalho** (EAP) = "o que será entregue" (substantivo). Ex: "API de Reservas"
- **Atividade** (cronograma) = "o que será feito" (verbo no infinitivo). Ex: "Desenvolver API de Gerenciamento de Reservas"

O uso de **verbos de ação no infinitivo** é exigência do PMBOK — atividades devem ser acionáveis.

**Coluna "Predecessora"** — define a dependência do tipo **Término-Início (TI)**: a atividade só pode começar depois que a predecessora **terminar**. Quando tem duas (ex: "R, O"), ambas precisam terminar antes de S começar.

**Por que certas atividades têm múltiplas predecessoras:**

| Atividade | Predecessoras | Lógica |
|-----------|---------------|--------|
| **S** (Grade Mobile) | R, O | A tela de grade de horários precisa tanto da tela anterior (R = busca) quanto da API de Reservas (O) funcionando, pois consome dados reais de disponibilidade |
| **V** (Cadastro Estab. Web) | U, P | A tela de cadastro precisa do login web pronto (U) e da API de administração (P) para salvar os dados |
| **X** (Grade Web) | W, O | A grade de reservas/bloqueios do admin precisa da tela de preços (W) e da API de reservas (O) |
| **AA** (Testes Integração) | T, Y, Z | Só pode testar integração quando mobile (T), web (Y) e casos de teste (Z) estiverem prontos |
| **AF** (Homologação) | AD, AE, AB | Validação final depende de app publicado (AD), painel no ar (AE) e testes de aceitação feitos (AB) |

**Por que N e P são paralelas:** Ambas dependem apenas de M (API de Autenticação). N é a API de Busca e P é a API de Administração — são independentes entre si, então podem ser feitas ao mesmo tempo por devs diferentes.

**Por que Q e U começam direto de I:** As telas de login (mobile e web) não precisam do banco de dados nem das APIs — podem ser desenvolvidas com mocks assim que o protótipo Figma (I) é aprovado. Isso é um exemplo natural de **paralelismo** no projeto.

---

### 4.2 Estimativas PERT

**PERT** = *Program Evaluation and Review Technique*. Criada pela Marinha dos EUA em 1958 para o projeto do míssil Polaris.

A ideia: em vez de "chutar" uma duração, você fornece **3 cenários**:

| Sigla | Nome | Significado |
|-------|------|-------------|
| **O** | Otimista | Tudo dá certo, sem impedimentos. "Se o desenvolvedor mais experiente fizer sem interrupções" |
| **M** | Mais Provável | Cenário realista, considerando reuniões, dúvidas normais, pequenos ajustes |
| **P** | Pessimista | Riscos se concretizam: bugs inesperados, mudança de requisito, dev ficou doente, etc. |

**Fórmula:**

$$TE = \frac{O + 4M + P}{6}$$

O peso 4 no M (mais provável) faz o cálculo seguir uma **distribuição Beta**, que é mais realista que uma média simples. O M domina o resultado, mas O e P "puxam" levemente para os extremos.

**Exemplos de como os valores foram determinados:**

- **Atividade O** (API de Reservas): O=5, M=8, P=14 → TE=8,5 dias. É a atividade de desenvolvimento mais longa porque inclui **controle de concorrência** (evitar dupla reserva), que é o problema técnico mais complexo do projeto. O pessimista é 14 porque bugs de concorrência são notoriamente difíceis de reproduzir e corrigir.

- **Atividade B** (Calcular ROI e Payback): O=1, M=2, P=3 → TE=2,0 dias. É rápida porque são cálculos financeiros simples com fórmulas prontas — pouca incerteza.

- **Atividade I** (Protótipo Figma): O=4, M=6, P=10 → TE=6,3 dias. Prototipagem envolve iterações com o cliente, o que pode estender o prazo. O pessimista de 10 reflete possíveis rodadas extras de feedback.

- **Atividade AD** (Publicar nas Lojas): O=3, M=5, P=10 → TE=5,5 dias. O pessimista é alto (10) porque Apple e Google podem rejeitar o app na revisão, exigindo resubmissão. O processo de review é externo e imprevisível.

---

### 4.3 Forward Pass e a Tabela IMC/TMC

**CPM** = *Critical Path Method* (Método do Caminho Crítico). Inventado em 1957 pela DuPont.

O Forward Pass calcula, **da esquerda para a direita** (do início ao fim), os tempos mais cedo possíveis:

| Sigla | Nome | Fórmula | Significado |
|-------|------|---------|-------------|
| **IMC** | Início Mais Cedo | `max(TMC de todas as predecessoras)` | "O mais cedo que posso começar esta atividade" |
| **TMC** | Término Mais Cedo | `IMC + TE` | "O mais cedo que posso terminar esta atividade" |

**Exemplo passo a passo — como os números da tabela foram calculados:**

1. **A**: IMC=0 (não tem predecessora), TMC = 0 + 3,2 = **3,2**
2. **B**: predecessora é A, então IMC = TMC de A = **3,2**, TMC = 3,2 + 2,0 = **5,2**
3. **M**: predecessora é L (TMC=42,7), então IMC = **42,7**, TMC = 42,7 + 5,2 = **47,9**
4. **N e P**: ambas dependem de M (TMC=47,9). N: TMC = 47,9 + 6,3 = **54,2**. P: TMC = 47,9 + 5,2 = **53,1**. Aqui a rede "bifurca".
5. **S** (múltiplas predecessoras): depende de R (TMC=43,8) e O (TMC=62,7). IMC = **max(43,8 ; 62,7) = 62,7**. S não pode começar até que a mais demorada das predecessoras termine.

**A atividade AF** (última) tem TMC = **93,0 dias** — essa é a duração total do projeto.

---

### 4.4 O Caminho Crítico em si

**Caminho crítico** = a sequência **mais longa** de atividades dependentes da rede. É "crítico" porque:
- Qualquer atraso em qualquer atividade desse caminho **atrasa o projeto inteiro** na mesma proporção.
- As atividades do caminho crítico têm **folga = 0** (não há margem).

O caminho crítico encontrado:

> A → B → C → D → E → F → G → H → I → J → K → L → M → **P → V → W → X → Y** → AA → AC → AD → AF

**Por que o caminho passa por P (API de Administração) e NÃO por N (API de Busca)?**

Após M (Autenticação), a rede bifurca:
- **Trilha web**: M → P (5,2d) → V (5,2d) → W (6,3d) → X (7,3d) → Y (4,0d) = **28,0 dias**
- **Trilha mobile**: M → N (6,3d) → O (8,5d) → S (7,3d) → T (4,3d) = **26,4 dias**

A trilha web soma 28,0 dias contra 26,4 da mobile — **1,6 dias a mais**. Por isso o caminho crítico segue pela web. A trilha mobile é o **caminho quase-crítico**.

**Por que isso importa na prática:** Se o professor perguntar "onde vocês concentrariam o gerente de projeto?", a resposta é: **no painel web** (P, V, W, X, Y). É ali que atraso = desastre. A trilha mobile tem 1,6 dias de folga, mas isso é muito pouco — qualquer deslize e ela vira o novo caminho crítico.

---

### 4.5 Tabela de Folgas

**Folga Total** = quanto uma atividade pode atrasar **sem atrasar o projeto**. É calculada no *Backward Pass* (de trás para frente): `Folga = IMT - IMC` (Início Mais Tarde − Início Mais Cedo).

| Folga | Atividades | O que significa |
|-------|------------|-----------------|
| **0 dias** | Todas do caminho crítico (22 atividades) | Zero margem. Atraso aqui = atraso no projeto |
| **1,6 dias** | N, O, S, T | Caminho quase-crítico. Apenas 1,6 dias de margem (~12 horas de trabalho). Basta um bug de concorrência não previsto na API de Reservas e vira caminho crítico |
| **20,5 dias** | Q, R | Telas iniciais do mobile (login e busca) podem ser feitas com muita antecedência porque só dependem do protótipo Figma, não das APIs |
| **17,6 dias** | U | Login web. Pode ser feito cedo, mas V (que vem depois) espera P, então a folga de U é "desperdiçada" — fazer U antes não adianta nada porque V está travada |
| **30,0 dias** | Z | Casos de teste. Podem ser escritos assim que as procedures de concorrência (L) ficarem prontas, mas só serão usados em AA, que é muito depois |

**Se o professor perguntar: "como vocês usariam as folgas?"** — as atividades com folga alta (Q, R, U, Z) indicam recursos que podem ser **realocados** temporariamente para o caminho crítico. Ex: o dev mobile (que faria Q e R) pode ajudar no painel web (X) durante a parte do projeto em que suas tarefas mobile ainda não começaram.

---

### 4.6 Compressão de 93 para 80 dias

O projeto tem restrição de **16 semanas = 80 dias úteis** (do Capítulo 2, seção Restrições). O CPM deu 93 dias — **13 dias a mais**. As 3 técnicas clássicas do PMBOK foram usadas:

#### Fast-tracking (Paralelismo Ampliado)

**Definição**: executar atividades que normalmente seriam sequenciais **em paralelo** (ou parcialmente em paralelo). Aceita-se maior risco em troca de tempo.

| Onde aplicado | Como | Risco aceito | Redução |
|---------------|------|--------------|---------|
| V em paralelo com P | O frontend web começa a ser desenvolvido usando *mocks* (respostas simuladas) da API, antes da API real ficar pronta | Se a API mudar, o frontend precisa ser reajustado | **4 dias** |
| X começa antes de W terminar | Os componentes visuais da grade de reservas são desenvolvidos enquanto a lógica de preços ainda está sendo finalizada | Risco de retrabalho se a estrutura de preços mudar | **3 dias** |

**Mock** = uma versão falsa da API que retorna dados estáticos pré-programados. Permite ao frontend ser desenvolvido sem depender do backend real.

#### Crashing (Adição de Recursos)

**Definição**: adicionar mais pessoas a uma atividade para encurtá-la. Tem custo financeiro mas comprime o cronograma.

| Onde | Como | Redução |
|------|------|---------|
| Atividade X (Grade Reservas Web) | O dev mobile, que tem folga de 20,5 dias nas suas tarefas, ajuda o dev web na atividade mais longa do caminho crítico | **2,3 dias** (de 7,3 para 5,0) |

**Por que só X e não outras?** Porque o *crashing* só faz sentido em atividades do **caminho crítico**. Adicionar gente a atividades com folga não adianta nada — o projeto não termina mais cedo.

#### Redução de Escopo Interno

| Onde | O que muda | Redução |
|------|-----------|---------|
| Y (Relatórios Web) | Entrega só relatório de reservas. Relatório de faturamento fica para v2. | **2 dias** (de 4,0 para 2,0) |

Isso não é "cortar escopo do projeto" — o relatório de faturamento continua existindo, só sai do MVP.

#### Conta final

- Fast-tracking: 4 + 3 = **7 dias**
- Crashing: **2,3 dias**
- Redução de escopo: **2 dias**
- Total de redução: **11,3 dias**
- Faltam 13 - 11,3 = **1,7 dias**
- Esses 1,7 dias são absorvidos pela **folga de 1,6 dias** do caminho quase-crítico (que agora vira efetivamente o caminho crítico empatado)

Resultado: **~80 dias úteis = 16 semanas**.

---

### Glossário rápido para a apresentação

| Sigla | Significado | Em inglês |
|-------|-------------|-----------|
| EAP | Estrutura Analítica do Projeto | WBS (Work Breakdown Structure) |
| CPM | Método do Caminho Crítico | Critical Path Method |
| PERT | Técnica de Avaliação e Revisão de Programa | Program Evaluation and Review Technique |
| IMC | Início Mais Cedo | ES (Early Start) |
| TMC | Término Mais Cedo | EF (Early Finish) |
| IMT | Início Mais Tarde | LS (Late Start) |
| TMT | Término Mais Tarde | LF (Late Finish) |
| TE | Tempo Esperado (duração PERT) | Expected Time |
| TAP | Termo de Abertura do Projeto | Project Charter |
| GP | Gerente de Projeto | PM (Project Manager) |
| MVP | Produto Mínimo Viável | Minimum Viable Product |
| CRUD | Create, Read, Update, Delete | — |
| ROI | Retorno sobre Investimento | Return on Investment |
| TI | Término-Início (tipo de dependência) | FS (Finish-to-Start) |