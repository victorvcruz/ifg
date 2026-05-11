# Roteiro de Testes

Para um tester (QA) trabalhar no seu sistema, o roteiro de testes é dividido em Casos de Teste (CT). Cada caso possui um objetivo, um passo a passo e um resultado esperado.

---

## 1. Testes de Cadastro (Funcional)

### CT01 - Cadastro PF com Sucesso
**Passos:**
1. Preencher Nome, Cidade, WhatsApp  
2. Digitar usuário de e-mail  
3. Selecionar "PF"  
4. Inserir CPF válido  
5. Clicar em Salvar  

**Resultado Esperado:**
- O card deve aparecer na lista com o ícone  
- O e-mail deve ser exibido em minúsculas  

**Resultado Alcançado:**
O cadastro de PF foi realizado com sucesso, o card apareceu corretamente e o e-mail foi padronizado para minúsculas, conforme esperado.

---

### CT02 - Cadastro PJ com Sucesso
**Passos:**
1. Preencher dados básicos  
2. Alterar para "PJ"  
3. Inserir CNPJ válido  
4. Clicar em Salvar  

**Resultado Esperado:**
- O input de CPF deve sumir  
- O de CNPJ deve aparecer  
- O card deve exibir o rótulo: **ID: CNPJ**

**Resultado Alcançado:**
O cadastro de PJ foi realizado com sucesso, o sistema alternou corretamente os campos de CPF e CNPJ, e o card exibiu o rótulo "ID: CNPJ" conforme esperado.

---

### CT03 - Alternância de Tipo
**Passos:**
1. Selecionar "PF" e depois "PJ"  

**Resultado Esperado:**
- Os campos de documento devem alternar a visibilidade sem erro  

**Resultado Alcançado:**
A alternância entre os tipos "PF" e "PJ" funcionou corretamente, com os campos de documento aparecendo e desaparecendo conforme esperado, sem apresentar erros.

---

## 2. Testes de Regras de Negócio (Validação Real)

### CT04 - CPF Inválido (Algoritmo)
**Passos:**
1. Inserir um CPF falso (ex: 111.111.111-11)  
2. Tentar salvar  

**Resultado Esperado:**
- Exibir alerta: **"CPF Inválido ou Incompleto!"**

**Resultado Alcançado:**
Ao inserir um CPF inválido, o sistema exibiu corretamente o alerta "CPF Inválido ou Incompleto!", impedindo o cadastro, conforme esperado.

---

### CT05 - CNPJ Inválido (Algoritmo)
**Passos:**
1. Inserir um CNPJ falso (ex: 00.000.000/0000-00)  
2. Tentar salvar  

**Resultado Esperado:**
- Exibir alerta: **"CNPJ Inválido ou Incompleto!"**

**Resultado Alcançado:**
Ao inserir um CNPJ inválido, o sistema exibiu corretamente o alerta "CNPJ Inválido ou Incompleto!", impedindo o cadastro, conforme esperado.

---

### CT06 - Padronização de E-mail
**Passos:**
1. Digitar "TESTE.USUARIO" no campo de e-mail  
2. Salvar  

**Resultado Esperado:**
- O e-mail deve aparecer como: `teste.usuario@...`

**Resultado Alcançado:**
Ao digitar "TESTE.USUARIO" no campo de e-mail, o sistema padronizou corretamente para minúsculas, exibindo "teste.usuario@..." conforme esperado.

---

### CT07 - Formatação de Nome (POO)
**Passos:**
1. Digitar "ana MARIA dos sanTOS"  
2. Salvar  

**Resultado Esperado:**
- Exibir: **Ana Maria Dos Santos**

**Resultado Alcançado:**
Ao digitar "ana MARIA dos sanTOS" no campo de nome, o sistema formatou corretamente para title case, exibindo "Ana Maria Dos Santos" conforme esperado.

### CT08 - Duplicidade de Cadastro de CPF
**Passos:**
1. Cadastrar um cliente com CPF já existente
2. Tentar salvar

**Resultado Esperado:**
- Exibir alerta: **"CPF já cadastrado!"**

**Resultado Alcançado:**
Ao tentar cadastrar um cliente com CPF já existente, o sistema exibiu corretamente o alerta "CPF já cadastrado!" e impediu o cadastro duplicado, conforme esperado.

### CT09 - Duplicidade de Cadastro de CNPJ
**Passos:**
1. Cadastrar um cliente com CNPJ já existente
2. Tentar salvar

**Resultado Esperado:**
- Exibir alerta: **"CNPJ já cadastrado!"**
- Impedir cadastro

**Resultado Alcançado:**
Ao tentar cadastrar um cliente com CNPJ já existente, o sistema exibiu corretamente o alerta "CNPJ já cadastrado!" e impediu o cadastro duplicado, conforme esperado.

### CT10 - Duplicidade de Número de Contato
**Passos:**
1. Cadastrar um cliente com número de WhatsApp já existente
2. Tentar salvar

**Resultado Esperado:**
- Exibir alerta: **"Número de WhatsApp já cadastrado!"**
- Impedir cadastro

**Resultado Alcançado:**
Ao tentar cadastrar um cliente com número de WhatsApp já existente, o sistema exibiu corretamente o alerta "Número de WhatsApp já cadastrado!" e impediu o cadastro duplicado, conforme esperado.

---

## 3. Testes de Interface e Máscaras (UX)

### CT08 - Máscara de Telefone
**Passos:**
1. Digitar apenas números: 62988887777  

**Resultado Esperado:**
- Formatar automaticamente para: **(62) 98888-7777**

**Resultado Alcançado:**
Ao digitar "62988887777" no campo de WhatsApp, o sistema aplicou corretamente a máscara, formatando para "(62) 98888-7777" conforme esperado.
---

### CT09 - Bloqueio de Caracteres
**Passos:**
1. Tentar digitar letras no campo de CPF ou WhatsApp  

**Resultado Esperado:**
- O sistema não deve permitir letras  

**Resultado Alcançado:**
Ao tentar digitar letras nos campos de CPF ou WhatsApp, o sistema bloqueou corretamente a entrada de caracteres alfabéticos, permitindo apenas números, conforme esperado.

---

### CT10 - Limpeza de Campos
**Passos:**
1. Realizar um cadastro com sucesso  

**Resultado Esperado:**
- Todos os inputs (exceto Estado e Domínio) devem ser limpos automaticamente  

**Resultado Alcançado:**
Após realizar um cadastro com sucesso, o sistema limpou corretamente todos os campos de entrada, exceto os campos de Estado e Domínio, conforme esperado.

### CT11 - Permissão de Caracteres Especiais que façam sentido no Nome
**Passos:**
1. Digitar um nome com caracteres especiais, como "João da Silva" ou "Maria d'Aparecida"  
2. Salvar

**Resultado Esperado:**
- O sistema deve aceitar e exibir corretamente os caracteres especiais no nome.

**Resultado Alcançado:**
O sistema permite a entrada de caracteres especiais que fazem sentido no nome, como "João da Silva" ou "Maria d'Aparecida", e os exibe corretamente, conforme esperado. A validação para caracteres especiais no nome está funcionando corretamente, permitindo apenas aqueles que são comuns em nomes, garantindo que o cadastro seja mais realista e inclusivo.

### CT12 - Permissão de Caracteres Especiais não façam sentido no Nome
**Passos:**
1. Digitar um nome com caracteres especiais que não façam sentido, como "João#Silva" ou "Maria@Aparecida"  
2. Tentar salvar

**Resultado Esperado:**
- O sistema deve exibir um alerta indicando que caracteres especiais não são permitidos no nome e
- impedir o cadastro.

**Resultado Alcançado:**
Ao digitar "João#Silva" ou "Maria@Aparecida" e tentar salvar, o sistema exibiu corretamente o alerta "Caracteres especiais não são permitidos no nome!" e impediu o cadastro, conforme esperado.
---

## 4. Casos de Exceção

### CT11 - Caracteres Inválidos no E-mail
**Passos:**
1. Digitar `admin#2024` no campo de usuário  
2. Tentar salvar  

**Resultado Esperado:**
- Exibir erro e impedir cadastro 

**Resultado Alcançado:**
A aplicação não me deixa digitar nenhum caractere inválido no campo de e-mail, garantindo que apenas caracteres permitidos sejam aceitos, conforme esperado.

---

### CT12 - Espaços no E-mail
**Passos:**
1. Digitar `joao silva` (com espaço)  
2. Tentar salvar  

**Resultado Esperado:**
- Impedir cadastro  

**Resultado Alcançado:**
Não é possível digitar espaços no campo de e-mail, o sistema bloqueia corretamente a entrada de espaços, impedindo o cadastro, conforme esperado.

---

## 5. Massa de Dados para Teste

- **CPF válido (exemplo):**  
  `000.000.000-00` *(usar gerador para valores reais)*  

- **CNPJ válido (exemplo):**  
  `00.000.000/0001-91`  

- **Nomes complexos:**  
  `mArIa d'aPaReCiDa`  

---

## 6. Como o Tester Reporta um Erro?

### Exemplo de Bug Report

**Título:**  
E-mail aceita caracteres especiais inválidos no usuário  

**Severidade:**  
Média  

**Passo a passo:**
1. Digitar `joão#teste` no e-mail  
2. O sistema salva sem validar que `#` é inválido  

---