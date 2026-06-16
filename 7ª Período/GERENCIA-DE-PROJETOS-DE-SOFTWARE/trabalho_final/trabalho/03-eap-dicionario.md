# Estrutura Analítica do Projeto (EAP) e Dicionário da EAP

## 1. EAP - Estrutura Analítica do Projeto

A EAP a seguir decompõe o projeto QuadraLivre em níveis hierárquicos orientados a entregas, com profundidade mínima de 3 níveis.

```
1.0 GERENCIAMENTO DO PROJETO
    1.1 Iniciação e Viabilidade
        1.1.1 Termo de Abertura do Projeto (TAP)
        1.1.2 Análise de Viabilidade Econômica (ROI e Payback)
    1.2 Escopo e Requisitos
        1.2.1 Declaração do Escopo
        1.2.2 EAP e Dicionário da EAP
    1.3 Cronograma e Custo
        1.3.1 Cronograma de Atividades
        1.3.2 Estimativas PERT e Caminho Crítico (CPM)

2.0 DESIGN E EXPERIÊNCIA (UI/UX)
    2.1 Identidade Visual
        2.1.1 Logotipo e Paleta de Cores
        2.1.2 Fluxogramas de Navegação
    2.2 Prototipagem
        2.2.1 Wireframes de Baixa Fidelidade
        2.2.2 Protótipo de Alta Fidelidade (Figma)

3.0 DESENVOLVIMENTO DO SOFTWARE
    3.1 Banco de Dados
        3.1.1 Modelagem Conceitual e Lógica
        3.1.2 Scripts de Criação das Tabelas
        3.1.3 Procedures e Índices de Concorrência
    3.2 Backend (API RESTful)
        3.2.1 API de Autenticação (Cadastro e Login)
        3.2.2 API de Busca de Quadras
        3.2.3 API de Gerenciamento de Reservas
        3.2.4 API de Administração (Estabelecimentos e Preços)
    3.3 Frontend Mobile (App do Jogador)
        3.3.1 Tela de Login e Cadastro
        3.3.2 Tela de Busca e Filtros
        3.3.3 Tela de Grade de Horários
        3.3.4 Tela de Confirmação e Histórico
    3.4 Frontend Web (Painel do Administrador)
        3.4.1 Tela de Login
        3.4.2 Tela de Cadastro do Estabelecimento
        3.4.3 Tela de Gerenciamento de Quadras e Preços
        3.4.4 Tela de Grade de Reservas e Bloqueios
        3.4.5 Tela de Relatórios

4.0 TESTES E IMPLANTAÇÃO
    4.1 Testes
        4.1.1 Casos de Teste de Agendamento Simultâneo
        4.1.2 Testes de Integração (API + Mobile + Web)
        4.1.3 Testes de Aceitação do Usuário
    4.2 Implantação
        4.2.1 Configuração de Infraestrutura em Nuvem
        4.2.2 Publicação do App nas Lojas (Android e iOS)
        4.2.3 Deploy do Painel Web
        4.2.4 Homologação Final
```

## 2. Dicionário da EAP

### Pacote 1.0 - Gerenciamento do Projeto

| ID | Nome | Descrição | Critério de Aceitação | Responsável |
|----|------|-----------|----------------------|-------------|
| 1.1.1 | Termo de Abertura do Projeto (TAP) | Documento formal que autoriza o início do projeto, contendo justificativa, marcos, orçamento e riscos iniciais | Documento revisado e aprovado pelo cliente | Gerente de Projeto |
| 1.1.2 | Análise de Viabilidade Econômica | Cálculo de ROI e Payback Simples com base em projeções de receita e custos | ROI superior a 100% e Payback inferior a 12 meses | Gerente de Projeto |
| 1.2.1 | Declaração do Escopo | Documento que define o limite do projeto, incluindo inclusões, exclusões, entregas e critérios de aceitação | Aprovado pelo cliente e alinhado ao TAP | Gerente de Projeto |
| 1.2.2 | EAP e Dicionário da EAP | Decomposição hierárquica do trabalho em pacotes de 3 níveis, com descrição detalhada de cada pacote | EAP com no mínimo 3 níveis e dicionário preenchido para todos os pacotes | Gerente de Projeto |
| 1.3.1 | Cronograma de Atividades | Lista de tarefas com verbos de ação, durações estimadas e dependências entre atividades | Cronograma aprovado pela equipe | Gerente de Projeto |
| 1.3.2 | Estimativas PERT e CPM | Cálculo de duração usando fórmula PERT e identificação do caminho crítico | Caminho crítico claramente identificado e justificado | Gerente de Projeto |

### Pacote 2.0 - Design e Experiência (UI/UX)

| ID | Nome | Descrição | Critério de Aceitação | Responsável |
|----|------|-----------|----------------------|-------------|
| 2.1.1 | Logotipo e Paleta de Cores | Identidade visual da plataforma incluindo logotipo, tipografia e esquema de cores | Aprovado pelo cliente em reunião de alinhamento | Designer |
| 2.1.2 | Fluxogramas de Navegação | Diagramas que mapeiam o fluxo do usuário no app e no painel web | Fluxogramas validados pela equipe antes da prototipagem | Designer |
| 2.2.1 | Wireframes de Baixa Fidelidade | Esboços iniciais das telas sem preocupação visual, focando em layout e funcionalidade | Wireframes revisados e aprovados pela equipe | Designer |
| 2.2.2 | Protótipo de Alta Fidelidade (Figma) | Protótipo navegável com design final, interações e transições entre telas | Aprovado pelo cliente como representação fiel do produto | Designer |

### Pacote 3.0 - Desenvolvimento do Software

| ID | Nome | Descrição | Critério de Aceitação | Responsável |
|----|------|-----------|----------------------|-------------|
| 3.1.1 | Modelagem Conceitual e Lógica | Diagrama entidade-relacionamento e modelo lógico do banco de dados | Modelo normalizado e revisado pela equipe | Desenvolvedor Backend |
| 3.1.2 | Scripts de Criação das Tabelas | SQL para criação do schema do banco de dados | Scripts executados sem erros em ambiente de desenvolvimento | Desenvolvedor Backend |
| 3.1.3 | Procedures e Índices de Concorrência | Procedures e índices no banco para garantir integridade em reservas simultâneas | Testes de concorrência passam sem perda de dados | Desenvolvedor Backend |
| 3.2.1 | API de Autenticação | Endpoints de cadastro, login e recuperação de senha | 95% dos testes de autenticação passam | Desenvolvedor Backend |
| 3.2.2 | API de Busca de Quadras | Endpoint que retorna quadras filtradas por localização e modalidade | Resposta em até 3 segundos para 100 quadras | Desenvolvedor Backend |
| 3.2.3 | API de Gerenciamento de Reservas | Endpoints de criar, listar e cancelar reservas com controle de concorrência | Reservas simultâneas são tratadas sem duplicidade | Desenvolvedor Backend |
| 3.2.4 | API de Administração | Endpoints para CRUD de estabelecimentos, quadras e preços | Todas as operações CRUD funcionam conforme especificado | Desenvolvedor Backend |
| 3.3.1 | Tela de Login e Cadastro | Interface no app para autenticação do usuário | Funciona em Android 8.0+ e iOS 14+ | Desenvolvedor Mobile |
| 3.3.2 | Tela de Busca e Filtros | Interface com campos de busca por localização e filtros por modalidade | Busca retorna resultados em até 2 segundos | Desenvolvedor Mobile |
| 3.3.3 | Tela de Grade de Horários | Exibição visual dos horários disponíveis e ocupados para uma quadra | Grade atualiza em tempo real após cada reserva | Desenvolvedor Mobile |
| 3.3.4 | Tela de Confirmação e Histórico | Tela de confirmação da reserva e listagem do histórico do usuário | Confirmação exibida em até 2 segundos após a ação | Desenvolvedor Mobile |
| 3.4.1 | Tela de Login | Interface web de autenticação para o administrador | Login funcional com validação de credenciais | Desenvolvedor Web |
| 3.4.2 | Tela de Cadastro do Estabelecimento | Formulário web para cadastro de dados do estabelecimento | Dados salvos corretamente no banco de dados | Desenvolvedor Web |
| 3.4.3 | Tela de Gerenciamento de Quadras e Preços | Interface para cadastro de quadras e configuração de preços por horário | Preços diferenciados por dia/hora aplicados corretamente | Desenvolvedor Web |
| 3.4.4 | Tela de Grade de Reservas e Bloqueios | Visualização das reservas e opção de bloqueio manual de horários | Bloqueio reflete no app em até 10 segundos | Desenvolvedor Web |
| 3.4.5 | Tela de Relatórios | Exibição de relatório básico de reservas e faturamento | Dados apresentados correspondem ao banco de dados | Desenvolvedor Web |

### Pacote 4.0 - Testes e Implantação

| ID | Nome | Descrição | Critério de Aceitação | Responsável |
|----|------|-----------|----------------------|-------------|
| 4.1.1 | Casos de Teste de Agendamento Simultâneo | Cenários de teste para validar que dois usuários não reservam o mesmo horário | 100% dos cenários de concorrência passam | Desenvolvedor Backend |
| 4.1.2 | Testes de Integração | Testes que validam a comunicação entre API, app mobile e painel web | Fluxo completo de reserva funciona de ponta a ponta | Todos os Desenvolvedores |
| 4.1.3 | Testes de Aceitação do Usuário | Validação do protótipo e do software com usuários reais | Usuários conseguem realizar reserva sem assistência | Gerente de Projeto |
| 4.2.1 | Configuração de Infraestrutura em Nuvem | Setup de servidores, banco de dados e domínios em ambiente de nuvem | Ambiente acessível e funcional 24/7 | Desenvolvedor Backend |
| 4.2.2 | Publicação do App nas Lojas | Submissão do aplicativo para Google Play Store e Apple App Store | App aprovado e disponível para download nas duas lojas | Desenvolvedor Mobile |
| 4.2.3 | Deploy do Painel Web | Publicação do painel administrativo em servidor web | Painel acessível via URL pública | Desenvolvedor Web |
| 4.2.4 | Homologação Final | Validação completa do sistema em ambiente de produção | Todos os critérios de aceitação do software atendidos | Gerente de Projeto |
