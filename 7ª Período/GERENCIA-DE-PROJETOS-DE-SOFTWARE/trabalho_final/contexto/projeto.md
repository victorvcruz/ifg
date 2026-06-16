Resumo do Projeto: Plataforma de Aluguel de Quadras Esportivas
📋 1. Alinhamento com a Iniciação (Aula 3)
• Nome Sugerido para o Projeto: MatchDay / QuadraLivre.
• Justificativa de Negócio: Automatizar o processo de reserva de quadras esportivas (futebol, beach tennis, vôlei, etc.), eliminando a dependência de ligações telefônicas ou mensagens manuais de WhatsApp. O sistema visa reduzir o tempo ocioso dos estabelecimentos e aumentar o faturamento dos donos de quadras através de uma grade de horários otimizada.
• Viabilidade Econômica Inicial: O cálculo do ROI e Payback Simples será baseado na taxa de corretagem por reserva ou em um plano de assinatura mensal pago pelos donos das quadras, contrapondo o custo de desenvolvimento de software.
🎯 2. Declaração do Escopo e Requisitos (Aula 4)
O escopo divide-se claramente entre o que será entregue para garantir um MVP (Produto Mínimo Viável) funcional e o que ficará de fora para conter a complexidade.
Inclusões de Escopo (Escopo do Produto)
• Módulo do Usuário (Jogador): • Cadastro e autenticação de conta. • Busca de quadras por localização e modalidade esportiva. • Visualização da grade de horários disponíveis em tempo real. • Reserva de horário com confirmação imediata.
• Módulo do Administrador (Dono da Quadra): • Painel web para cadastro do estabelecimento e das quadras. • Configuração de preços diferenciados por hora/dia. • Bloqueio manual de horários (para manutenção ou uso próprio).
Exclusões de Escopo (O que NÃO será feito nesta versão)
• Divisão de Checkout: O sistema não fará o racha automático do valor entre os amigos pelo aplicativo; o pagamento da reserva é integral por quem realiza o agendamento.
• Sistema de Matchmaking: Criação de partidas públicas para preencher vagas com desconhecidos não será abordada nesta fase.
🌲 3. Estrutura Analítica do Projeto - EAP (Aula 4)
Decomposição hierárquica sugerida para estruturar os seus primeiros níveis da EAP:
1.0 Gerenciamento do Projeto
    1.1 Termo de Abertura (TAP) e Viabilidade
    1.2 Declaração do Escopo e EAP
    1.3 Cronograma e Caminho Crítico (CPM)
2.0 Design e Experiência (UI/UX)
    2.1 Identidade Visual e Fluxogramas
    2.2 Protótipo de Alta Fidelidade (Figma)
3.0 Desenvolvimento do Software
    3.1 Banco de Dados (Modelagem de Agendamentos)
    3.2 Backend (APIs de Busca e Reserva)
    3.3 Frontend Web (Painel do Dono da Quadra)
    3.4 Frontend Mobile (App do Jogador)
4.0 Testes e Implantação
    4.1 Casos de Teste de Agendamento Simultâneo
    4.2 Homologação e Publicação nas Lojas / Web

⏱️ 4. Tempo e Cronograma (Aula 5)
• Abordagem de Atividades: Os pacotes de trabalho da EAP acima (substantivos) serão desdobrados em ações com verbos no cronograma (ex: "Modelar tabelas de horários", "Desenvolver tela de busca").
• Estimativas: A equipe aplicará a fórmula PERT TE = \frac{O + 4M + P}{6} para calcular a duração estimada das tarefas mais críticas, como a lógica de concorrência de horários do backend.
• Caminho Crítico (CPM): O foco total de monitoramento estará na linha de desenvolvimento das APIs de agendamento e sua integração com o app mobile, que historicamente representam o gargalo desse tipo de sistema.
