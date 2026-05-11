# Sistema de Informação: Cadastro de Clientes

## 1. Cabeçalho
- **Disciplina:** Gerência de Projetos de Software  
- **Professor(a):**  
- **Aluno(a):**  
- **Curso / Turma:**  
- **Data:**  

---

## 2. Enunciado Geral

Este exercício tem como objetivo simular a etapa de concepção e planejamento inicial de um projeto de software, aplicando conceitos fundamentais de Gerência de Projetos de Software, tais como visão do produto, escopo, requisitos e proposta do projeto.

O projeto consiste no desenvolvimento de um **Sistema de Informação para Cadastro de Clientes**, voltado a um pequeno empresário que atualmente gerencia seus clientes de forma manual.

Você deverá elaborar quatro documentos fundamentais de um projeto de software, utilizando as informações fornecidas neste guia.

> ⚠️ **Atenção:**  
> Todas as respostas devem ser coerentes entre si e alinhadas ao cenário apresentado.

---

## 3. Cenário do Projeto

### 3.1 Contexto

Um pequeno empresário realiza o controle de seus clientes utilizando meios manuais, como:

- Caderno de anotações  
- Planilhas isoladas  
- Agenda física  
- Memória pessoal  

### 3.2 Problemas Identificados

- Dificuldade em localizar informações rapidamente  
- Risco de perda ou dano aos registros manuais  
- Impossibilidade de gerar relatórios  
- Dificuldade em identificar padrões e histórico de clientes  

### 3.3 Público-Alvo / Usuários

- Empresário (administrador do sistema)  
- Funcionários do negócio  

---

## 4. Objetivo e Benefícios do Sistema

### 4.1 Objetivo Geral

Desenvolver um sistema digital simples para armazenar e gerenciar informações de clientes.

### 4.2 Benefícios Esperados

- Melhor organização dos dados  
- Maior rapidez no atendimento  
- Redução de erros de registro  
- Facilidade de acesso às informações  

---

## 5. Funcionalidades do Sistema (Requisitos Funcionais)

O sistema deverá permitir:

- **RF01 – Cadastrar Cliente:** Inserção de novos clientes no sistema  
- **RF02 – Diferenciação de Tipo:** Cadastro de Pessoa Física (PF) e Pessoa Jurídica (PJ)  
- **RF03 – Listar Clientes:** Exibição de todos os clientes cadastrados  
- **RF04 – Editar Cliente:** Alteração de dados de clientes existentes  
- **RF05 – Excluir Cliente:** Remoção de clientes do sistema  
- **RF06 – Pesquisar Cliente:** Busca de clientes por nome ou contato  

---

## 6. Modelo de Dados (Base para Regras de Negócio)

Cada cliente deve possuir obrigatoriamente os seguintes campos:

- **Identificação:** CPF ou CNPJ  
- **Nome:** Nome completo ou Razão Social  
- **Contato:** WhatsApp e E-mail  
- **Localização:** Cidade e Estado  

---

## 7. Tecnologias e Restrições do Projeto (Requisitos Não Funcionais)

### 7.1 Tecnologias Permitidas

- HTML  
- CSS  
- JavaScript  
- JSON  

### 7.2 Restrições Técnicas

- Sistema sem backend  
- Sistema sem banco de dados relacional  
- Persistência de dados em arquivo JSON local  
- Execução local no navegador  

### 7.3 Fora do Escopo

- Autenticação (login e senha)  
- Múltiplos usuários simultâneos  
- Acesso via servidor ou nuvem  

---

## 8. Cronograma Sugerido

| Etapa   | Descrição                     | Período Estimado        |
|--------|------------------------------|-------------------------|
| Etapa 1 | Levantamento de requisitos   | 1 a 2 semanas           |
| Etapa 2 | Desenvolvimento do sistema   | 3 a 5 semanas           |
| Etapa 3 | Testes                       | 1 a 2 semanas           |
| Etapa 4 | Entrega final                | Data final da disciplina |