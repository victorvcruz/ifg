--1) Crie uma tabela de cargo com o campo id, cargo;

CREATE TABLE cargo
(
    id    SERIAL PRIMARY KEY,
    cargo VARCHAR(100)
);

--2) Crie uma tabela Eleicao_Cargo que vincule os cargos às eleições;

CREATE TABLE eleicao_cargo
(
    cargo_id   INT REFERENCES cargo (id),
    eleicao_id INT REFERENCES eleicoes (eleicaoid),
    PRIMARY KEY (cargo_id, eleicao_id)
);

--3) Liste os candidatos que receberam mais de 10.000 votos em uma eleição federal.

SELECT COUNT(*), candidatos.Nome
FROM votos
         INNER JOIN candidatos on votos.CandidatoID = candidatos.CandidatoID
         INNER JOIN Eleicoes E on votos.EleicaoID = E.EleicaoID
GROUP BY votos.CandidatoID, votos.EleicaoID, candidatos.Nome, e.TipoEleicao
HAVING COUNT(*) > 10000
   AND e.TipoEleicao = 'Federal';

--4) Encontre os partidos que possuem candidatos eleitos para um cargo específico (ex.: Prefeito).

SELECT Partidos.*
FROM Partidos
         INNER JOIN Candidatos C on Partidos.PartidoID = C.PartidoID
WHERE C.Cargo LIKE '%Prefeito%';

-- 5) Crie uma procedure chamada RegistrarVoto que:
-- a) Receba os IDs da eleição, do eleitor e do candidato.
-- b) Insira o voto na tabela Votos.
-- c) Verifique se o eleitor já votou nessa eleição. Caso tenha, retorne um erro.

CREATE OR REPLACE FUNCTION RegistrarVoto(eleicao_id INT, eleitor_id INT, candidato_id INT) RETURNS VOID AS
$$
DECLARE
    voto RECORD;

BEGIN
    SELECT *
    INTO voto
    FROM votos
    WHERE votos.EleicaoID = eleicao_id
      AND votos.EleitorID = eleitor_id;

    if voto is not null THEN
        RAISE EXCEPTION 'Eleitor já votou nessa eleição';
    END IF;

    INSERT INTO Votos(EleitorID, CandidatoID, EleicaoID, DataVoto) VALUES (eleitor_id, candidato_id, eleicao_id, now());
END;
$$
    LANGUAGE plpgsql;

