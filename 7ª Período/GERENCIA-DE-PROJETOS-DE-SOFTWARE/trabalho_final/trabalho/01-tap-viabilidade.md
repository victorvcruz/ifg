# Termo de Abertura do Projeto (TAP) e Análise de Viabilidade

## 1. Identificação do Projeto

| Campo | Descrição |
|-------|-----------|
| Nome do Projeto | QuadraLivre - Plataforma de Aluguel de Quadras Esportivas |
| Gerentes do Projeto | Victor Hugo Vieira Cruz e Filipe Moreira Coelho |
| Cliente | Donos de quadras esportivas e usuários praticantes de esportes |
| Data de Emissão | 02 de Junho de 2026 |
| Versão | 1.0 |

## 2. Justificativa de Negócio

O mercado de aluguel de quadras esportivas no Brasil é fragmentado e predominantemente analógico. A maioria dos estabelecimentos ainda opera por meio de ligações telefônicas ou mensagens de WhatsApp para gerenciar reservas, o que gera ineficiências como dupla reserva, horários ociosos não preenchidos e dificuldade de escalabilidade. O cliente final, por sua vez, enfrenta dificuldade para encontrar quadras disponíveis, comparar preços e confirmar reservas de forma rápida.

A QuadraLivre surge como uma plataforma digital que automatiza todo o ciclo de reserva: o usuário busca quadras por localização e modalidade, visualiza a grade de horários em tempo real e confirma a reserva instantaneamente; o dono da quadra gerencia preços, horários e bloqueios por meio de um painel web. O projeto se justifica pelo potencial de redução do tempo ocioso das quadras em até 30%, aumento do faturamento dos estabelecimentos e melhoria significativa da experiência do usuário final, que elimina intermediários manuais.

## 3. Objetivos do Projeto

- Desenvolver um aplicativo mobile para que usuários encontrem e reservem quadras esportivas em tempo real.
- Desenvolver um painel web para que administradores gerenciem seus estabelecimentos, quadras, preços e horários.
- Implementar um sistema de reservas com confirmação imediata e controle de concorrência para evitar duplicidade.
- Entregar o MVP em até 4 meses com as funcionalidades essenciais de busca, reserva e gestão.

## 4. Marcos Principais do Projeto

| Marco | Descrição | Data Prevista |
|-------|-----------|---------------|
| M1 | Aprovação do TAP e Viabilidade | Semana 1 |
| M2 | Declaração do Escopo e EAP concluídos | Semana 2 |
| M3 | Protótipo de alta fidelidade aprovado (Figma) | Semana 4 |
| M4 | Modelagem do banco de dados concluída | Semana 5 |
| M5 | Backend (APIs de busca e reserva) concluído | Semana 9 |
| M6 | Frontend web (painel do dono) concluído | Semana 11 |
| M7 | Frontend mobile (app do jogador) concluído | Semana 13 |
| M8 | Testes de agendamento simultâneo concluídos | Semana 14 |
| M9 | Homologação e publicação | Semana 16 |

## 5. Orçamento Preliminar

| Item | Custo Estimado (R$) |
|------|---------------------|
| Recursos Humanos (4 profissionais × 4 meses) | 48.000,00 |
| Ferramentas e Infraestrutura (servidores, licenças, design) | 7.200,00 |
| Custos Operacionais (energia, internet, deslocamento) | 2.400,00 |
| Taxas de publicação nas lojas (Apple e Google) | 400,00 |
| Contingenciamento (10%) | 5.800,00 |
| **Total** | **63.800,00** |

## 6. Análise de Viabilidade Econômica

### 6.1 Premissas Adotadas

- Custo total do projeto (investimento inicial): R$ 63.800,00
- Custo operacional mensal estimado (servidores, manutenção, suporte): R$ 2.500,00
- Modelo de receita: assinatura mensal de R$ 97,00 por estabelecimento + taxa de 10% sobre o valor de cada reserva
- Número de estabelecimentos captados no primeiro ano: 15
- Média de reservas por estabelecimento por mês: 80
- Valor médio por reserva: R$ 100,00
- Horizonte de análise: 12 meses

### 6.2 Projeção de Receita Mensal

| Fonte | Cálculo | Valor (R$) |
|-------|---------|------------|
| Assinaturas (15 estabelecimentos × R$ 97,00) | 15 × 97,00 | 1.455,00 |
| Taxa sobre reservas (15 × 80 × R$ 100,00 × 10%) | 15 × 80 × 100 × 0,10 | 12.000,00 |
| **Receita Mensal Bruta** | | **13.455,00** |
| **Receita Anual Bruta** | 13.455,00 × 12 | **161.460,00** |

### 6.3 Cálculo do Retorno sobre o Investimento (ROI)

ROI = (Receita Líquida Anual − Investimento Inicial) / Investimento Inicial × 100

Receita Líquida Anual = Receita Anual Bruta − Custos Operacionais Anuais

Receita Líquida Anual = R$ 161.460,00 − (R$ 2.500,00 × 12) = R$ 161.460,00 − R$ 30.000,00 = R$ 131.460,00

ROI = (R$ 131.460,00 − R$ 63.800,00) / R$ 63.800,00 × 100

ROI = R$ 67.660,00 / R$ 63.800,00 × 100

**ROI = 106,05%**

### 6.4 Cálculo do Payback Simples

Payback Simples = Investimento Inicial / Receita Líquida Mensal

Receita Líquida Mensal = Receita Mensal Bruta − Custo Operacional Mensal

Receita Líquida Mensal = R$ 13.455,00 − R$ 2.500,00 = R$ 10.955,00

Payback Simples = R$ 63.800,00 / R$ 10.955,00

**Payback Simples = 5,82 meses**

### 6.5 Conclusão da Viabilidade

O projeto apresenta um ROI de 106,05% no primeiro ano, indicando que o capital investido mais que dobra ao final do horizonte de análise. O Payback Simples de aproximadamente 6 meses demonstra que o investimento inicial é recuperado em meio período de operação, o que é considerado bastante favorável para projetos de software. Diante dos indicadores, o projeto é economicamente viável e recomenda-se sua execução.

## 7. Partes Interessadas (Stakeholders)

| Stakeholder | Papel | Expectativa |
|-------------|-------|-------------|
| Donos de quadras esportivas | Cliente pagante | Aumentar taxa de ocupação e automatizar gestão |
| Usuários jogadores | Usuário final | Reservar quadras de forma rápida e prática |
| Equipe de desenvolvimento | Executora | Entregar o MVP no prazo e com qualidade |
| Investidores | Financiador | Retorno financeiro via taxa de corretagem |

## 8. Riscos Iniciais Identificados

| Risco | Impacto | Probabilidade | Ação Preventiva |
|-------|---------|---------------|-----------------|
| Baixa adesão de estabelecimentos | Alto | Média | Programa de onboarding gratuito nos 2 primeiros meses |
| Concorrência com soluções similares | Médio | Alta | Diferencial de UX e preços competitivos |
| Complexidade técnica na concorrência de reservas | Alto | Baixa | Testes exaustivos de agendamento simultâneo |
| Atraso no cronograma | Médio | Média | Planejamento com folga e reuniões semanais de acompanhamento |

## 9. Referência ao Protótipo

O protótipo navegável de alta fidelidade do projeto QuadraLivre será entregue separadamente em formato Figma, contendo as telas do aplicativo mobile (módulo jogador) e do painel web (módulo administrador), conforme detalhado na EAP (pacote 2.2.2).
