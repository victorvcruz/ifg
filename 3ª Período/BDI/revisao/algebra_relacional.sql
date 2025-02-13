CREATE TABLE cidadao
(
    id              SERIAL PRIMARY KEY,
    nome_completo   VARCHAR(255),
    cpf             VARCHAR(11),
    data_nascimento DATE,
    endereco        VARCHAR(255)
);

CREATE TABLE partido
(
    id            SERIAL PRIMARY KEY,
    nome          VARCHAR(255),
    sigla         VARCHAR(10),
    data_fundacao DATE
);

CREATE TABLE candidato
(
    id             SERIAL PRIMARY KEY,
    id_cidadao     INT REFERENCES cidadao (id),
    id_partido     INT REFERENCES partido (id),
    cargo          VARCHAR(255),
    registro_unico VARCHAR(20)
);

CREATE TABLE eleicao
(
    id   SERIAL PRIMARY KEY,
    tipo VARCHAR(255)
);

CREATE TABLE voto
(
    id           SERIAL PRIMARY KEY,
    id_cidadao   INT REFERENCES cidadao (id),
    id_eleicao   INT REFERENCES eleicao (id),
    id_candidato INT REFERENCES candidato (id),
    data         DATE
);

INSERT INTO cidadao (nome_completo, cpf, data_nascimento, endereco)
VALUES ('João da Silva', '12345678901', '1990-01-01', 'Rua 1, 123'),
       ('Maria de Souza', '23456789012', '1995-02-02', 'Rua 2, 456'),
       ('José Oliveira', '34567890123', '2000-03-03', 'Rua 3, 789'),
       ('Lucas Oliveira', '45678901234', '2005-04-04', 'Rua 4, 012'),
       ('Ana Castro', '56789012345', '2010-05-05', 'Rua 5, 345'),
       ('Pedro Dias', '67890123456', '2015-06-06', 'Rua 6, 678');

INSERT INTO partido (nome, sigla, data_fundacao)
VALUES ('Partido A', 'PA', '1990-01-01'),
       ('Partido B', 'PB', '1995-02-02'),
       ('Partido C', 'PC', '2000-03-03');

INSERT INTO candidato (id_cidadao, id_partido, cargo, registro_unico)
VALUES (1, 1, 'Prefeito', '12345678901'),
       (2, 2, 'Vereador', '23456789012'),
       (3, 3, 'Deputado', '34567890123');

INSERT INTO eleicao (tipo)
VALUES ('Municipal'),
       ('Estadual'),
       ('Federal');

INSERT INTO voto (id_cidadao, id_eleicao, id_candidato, data)
VALUES (1, 1, 1, '2020-01-01'),
       (2, 2, 2, '2020-02-02'),
       (3, 3, 3, '2020-03-03'),
       (3, 2, 3, '2020-03-03'),
       (3, 1, 3, '2020-03-03');

--a)  Encontre todos os eleitores que votaram em uma determinada eleição.
SELECT *
FROM cidadao
         INNER JOIN voto v on cidadao.id = v.id_cidadao and v.id_eleicao = 1;

--b) Liste os nomes e CPF de todos os eleitores
SELECT nome_completo, cpf
FROM cidadao;

--c) Liste os candidatos e seus respectivos partidos.
SELECT c.nome_completo, p.nome
FROM candidato
         INNER JOIN cidadao c on candidato.id_cidadao = c.id
         INNER JOIN partido p on candidato.id_partido = p.id;

--d) Combine todas as eleições com todos os candidatos.
SELECT e.*, c.*
FROM eleicao e
         CROSS JOIN candidato c;

--e) Liste eleitores que votaram em mais de uma eleição
SELECT c.* FROM eleicao
    INNER JOIN voto v on eleicao.id = v.id_eleicao
    INNER JOIN cidadao c on v.id_cidadao = c.id;

--f) Encontre eleitores que não votaram em uma eleição específica.
SELECT * FROM cidadao
WHERE
    cidadao.id NOT IN (SELECT id_cidadao FROM voto WHERE id_eleicao = 1);

--g) Liste todos os votos com os detalhes dos eleitores e candidatos.
SELECT v.*, c.*, cidadao.*
FROM voto v
         INNER JOIN candidato c on v.id_candidato = c.id
         INNER JOIN cidadao on v.id_cidadao = cidadao.id;

--h) Liste todos os eleitores e os votos, incluindo os eleitores que não votaram.
SELECT cidadao.*, v.*
FROM cidadao
         LEFT JOIN voto v on cidadao.id = v.id_cidadao;

--i) Encontre candidatos que receberam votos em todas as eleições.
SELECT c2.nome_completo, COUNT(DISTINCT v.id_eleicao) as eleicoes
FROM candidato c
         INNER JOIN voto v on c.id = v.id_candidato
         INNER JOIN cidadao c2 on c.id_cidadao = c2.id
GROUP BY c2.nome_completo, c.id_cidadao
HAVING COUNT(DISTINCT v.id_eleicao) = (SELECT COUNT(*) FROM eleicao);


--j) Encontre o número de votos por candidato.
SELECT cidadao.nome_completo, COUNT(v.id) as votos
FROM candidato c
         LEFT JOIN voto v on c.id = v.id_cidadao
         INNER JOIN cidadao on c.id_cidadao = cidadao.id
GROUP BY cidadao.nome_completo;