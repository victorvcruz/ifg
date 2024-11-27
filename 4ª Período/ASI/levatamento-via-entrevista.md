
# Clínica Médica

- [Clínica Médica](#clínica-médica)
  - [Levantamento de Requisitos via Entrevista](#levantamento-de-requisitos-via-entrevista)
    - [Perguntas e Respostas](#perguntas-e-respostas)
      - [Para os Pacientes:](#para-os-pacientes)
      - [Para os Médicos:](#para-os-médicos)
      - [Para a Equipe Administrativa:](#para-a-equipe-administrativa)
  

**Grupo**:
- Victor Hugo Vieira Cruz
- Filipe Moreira Coelho 


## Levantamento de Requisitos via Entrevista

### Perguntas e Respostas

#### Para os Pacientes:
- Quais informações são obrigatórias para o cadastro?
    > Nome completo, CPF, telefone e e-mail. Endereço não será necessário inicialmente.
- Qual é o formato preferido para notificações?
    > Preferem receber notificações por SMS e e-mail, mas deve haver uma opção para escolher apenas um dos dois.
- Há restrições para o cancelamento de consultas?
    > Sim, o cancelamento deve ser permitido até 24 horas antes da consulta.
- Vocês desejam permitir a alteração de dados pessoais após o cadastro?
    > Sim, os pacientes poderão alterar telefone e e-mail, mas não o CPF.
- Os pacientes poderão visualizar o histórico de consultas realizadas?
    > Sim, o sistema deve permitir acesso ao histórico com detalhes como data, médico, e especialidade.
#### Para os Médicos:
- Como os médicos preferem visualizar suas agendas?
    > Em formato de calendário diário e semanal, com a possibilidade de visualizar um resumo mensal.
- Existem preferências específicas para os horários bloqueados?
    > Sim, desejam poder bloquear horários específicos e programar bloqueios recorrentes, como feriados ou dias de folga.
- Os médicos precisam acessar informações sobre o histórico do paciente durante as consultas?
    > Sim, precisam visualizar o histórico das últimas consultas realizadas dentro da clínica.
- Há interesse em incluir notificações para lembrar os médicos sobre consultas próximas?
    > Sim, notificações por e-mail são preferidas, enviadas no início do dia com a agenda completa.
- Desejam incluir observações específicas em suas agendas (exemplo: notas sobre consultas)?
    > Sim, deve haver uma funcionalidade para adicionar notas privadas visíveis apenas para o médico.
#### Para a Equipe Administrativa:
- Quais informações devem estar presentes no cadastro de médicos?
    > Nome completo, CRM, especialidade, telefone, e-mail, e horários de atendimento padrão.
- Quais métricas específicas são importantes nos relatórios?
    > Número total de consultas realizadas, consultas canceladas, segmentação por especialidade e por médico.
- Qual nível de acesso será necessário para diferentes membros da equipe administrativa?
    > Gerentes terão acesso total, incluindo relatórios, enquanto atendentes poderão apenas cadastrar e editar informações básicas.
- Há requisitos específicos para edição e exclusão de cadastros?
    > Sim, todas as alterações e exclusões devem ser registradas no sistema, com identificação de quem realizou a ação.
- Que tipo de exportação de dados vocês necessitam nos relatórios?
    > PDF e Excel serão os formatos obrigatórios.

