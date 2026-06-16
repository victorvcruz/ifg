# Declaração do Escopo do Projeto

## 1. Descrição do Projeto

O projeto QuadraLivre consiste no desenvolvimento de uma plataforma digital para reserva de quadras esportivas, composta por um aplicativo mobile voltado para usuários jogadores e um painel web voltado para administradores de estabelecimentos. O objetivo é automatizar o processo de reserva, eliminando a dependência de canais manuais como telefone e WhatsApp, e oferecendo uma grade de horários em tempo real, confirmação imediata de reservas e ferramentas de gestão para os donos das quadras.

## 2. Descrição do Produto

O produto é composto por dois módulos principais:

**Módulo Usuário (Aplicativo Mobile):**
- Cadastro e autenticação de conta (email e senha).
- Busca de quadras por localização geográfica e modalidade esportiva (futebol, beach tennis, vôlei, tênis, etc.).
- Visualização da grade de horários disponíveis em tempo real para cada quadra.
- Seleção de horário e confirmação imediata da reserva.
- Histórico de reservas realizadas.
- Notificação de lembrete de reserva.

**Módulo Administrador (Painel Web):**
- Cadastro do estabelecimento (endereço, fotos, descrição, modalidades oferecidas).
- Cadastro e gerenciamento de quadras (nome, tipo de superfície, capacidade).
- Configuração de preços diferenciados por horário e dia da semana.
- Visualização e gerenciamento da grade de reservas.
- Bloqueio manual de horários para manutenção ou uso próprio.
- Relatório básico de reservas e faturamento.

## 3. Entregas do Projeto

| Entrega | Descrição |
|---------|-----------|
| E1 - Documento de Gerenciamento | TAP, Declaração de Escopo, EAP e Cronograma |
| E2 - Protótipo Navegável | Protótipo de alta fidelidade no Figma (telas do app mobile e painel web) |
| E3 - Banco de Dados | Modelo relacional implementado com tabelas de usuários, estabelecimentos, quadras, reservas e preços |
| E4 - Backend | API RESTful com endpoints de autenticação, busca de quadras, gerenciamento de reservas e administração |
| E5 - Aplicativo Mobile | App Android/iOS com as funcionalidades do módulo usuário |
| E6 - Painel Web | Interface web responsiva com as funcionalidades do módulo administrador |
| E7 - Testes e Homologação | Casos de teste de agendamento simultâneo e validação do fluxo completo |
| E8 - Documentação Técnica | Instruções de implantação e manual básico do usuário |

## 4. Critérios de Aceitação do Software

| Requisito | Critério de Aceitação |
|-----------|----------------------|
| Busca de quadras | O usuário deve encontrar quadras filtrando por modalidade e localização em até 3 segundos |
| Visualização da grade | A grade de horários deve refletir o estado atual das reservas sem necessidade de recarregamento manual |
| Confirmação de reserva | A reserva deve ser confirmada em até 5 segundos após a seleção do horário |
| Concorrência | Dois usuários tentando reservar o mesmo horário simultaneamente: apenas o primeiro deve obter sucesso |
| Painel do administrador | O dono da quadra deve conseguir bloquear um horário e a alteração deve refletir no app em até 10 segundos |
| Autenticação | O usuário deve conseguir cadastrar-se e logar-se sem erros em 95% das tentativas válidas |
| Plataformas | O app deve funcionar em dispositivos Android 8.0+ e iOS 14+ |

## 5. Inclusões do Escopo

- Cadastro e autenticação de usuários (jogadores e administradores).
- Busca de quadras por localização e modalidade esportiva.
- Grade de horários disponíveis em tempo real.
- Reserva de horário com confirmação imediata e controle de concorrência.
- Painel administrativo web para gestão de estabelecimento, quadras, preços e horários.
- Bloqueio manual de horários pelo administrador.
- Notificação de lembrete de reserva para o usuário.
- Histórico de reservas para o usuário.
- Relatório básico de reservas para o administrador.

## 6. Exclusões do Escopo

- **Divisão de checkout (rache):** o sistema não fará o rateio automático do valor da reserva entre os participantes. O pagamento da reserva é integral por parte de quem realiza o agendamento.
- **Sistema de matchmaking:** não será criada funcionalidade para formação de partidas públicas com desconhecidos para preencher vagas.
- **Gateway de pagamento integrado:** nesta versão, a confirmação da reserva é feita sem processamento financeiro online. O pagamento será tratado presencialmente ou por acordos prévios entre as partes.
- **Marketplace de produtos esportivos:** não haverá venda de produtos ou equipamentos dentro da plataforma.
- **Aplicativo para administradores:** o módulo de administração será exclusivamente web, sem versão mobile dedicada para gestão.
- **Chat interno entre usuários:** não haverá mensageria direta entre jogadores ou entre jogador e estabelecimento.
- **Multi-idioma:** a plataforma será entregue exclusivamente em português brasileiro.

## 7. Restrições do Projeto

- Prazo máximo de 16 semanas para entrega do MVP.
- Equipe fixa de 4 pessoas (não é possível contratação adicional).
- Orçamento máximo de R$ 65.000,00.
- A plataforma deve funcionar em dispositivos Android 8.0+ e iOS 14+.

## 8. Premissas do Projeto

- A equipe terá acesso às ferramentas de desenvolvimento necessárias (IDEs, servidores de teste, Figma).
- Os dados de quadras e estabelecimentos serão fornecidos pelos próprios donos no momento do cadastro.
- A infraestrutura em nuvem será dimensionada para suportar até 100 requisições simultâneas.
- O protótipo Figma será aprovado pelo cliente antes do início do desenvolvimento.
