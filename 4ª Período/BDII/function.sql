CREATE OR REPLACE FUNCTION idade(data_nascimento DATE)
    RETURNS INT AS
$$
BEGIN
    RETURN EXTRACT(YEAR FROM CURRENT_DATE) - EXTRACT(YEAR FROM data_nascimento);
END;
$$ LANGUAGE plpgsql;

select *
from idade('1976-03-31');

CREATE OR REPLACE FUNCTION media_preco_venda(IN cod_gravadora INT, OUT MEDIA FLOAT)
    RETURNS float AS
$$
BEGIN
    SELECT INTO MEDIA AVG(preco_venda) FROM cd WHERE cd.idgravadora = cod_gravadora;
END;
$$ LANGUAGE plpgsql;

select *
from cd;

select media_preco_venda(3);

CREATE OR REPLACE FUNCTION dados_cd(IN cod_cd INT, IN num_faixa INT)
    RETURNS text AS
$$
DECLARE
    nom_cd      VARCHAR;
    nome_musica VARCHAR;
BEGIN
    SELECT cd.nome_cd,
           musica.nomemusica
    INTO nom_cd, nome_musica
    FROM cd
             INNER JOIN faixa ON cd.idcd = faixa.idcd and faixa.numero_faixa = num_faixa
             INNER JOIN musica ON faixa.idmusica = musica.idmusica
    WHERE cd.idcd = cod_cd;
    return nom_cd || ' - ' || nome_musica;
END;
$$ LANGUAGE plpgsql;

SELECT dados_cd(1, 1);

CREATE OR REPLACE FUNCTION dados_gravadora()
    RETURNS SETOF RECORD AS
$$
BEGIN
    return QUERY SELECT idgravadora, nomegravadora FROM gravadora;
END;
$$ LANGUAGE plpgsql;

SELECT *
FROM dados_gravadora() AS (idGrav INT, gravadora VARCHAR);

CREATE TYPE dadosG AS
(
    idGrav    INT,
    gravadora VARCHAR
);

CREATE OR REPLACE FUNCTION dados_gravadora_with_type()
    RETURNS SETOF dadosG AS
$$
BEGIN
    return QUERY SELECT idgravadora, nomegravadora FROM gravadora;
END;
$$ LANGUAGE plpgsql;

SELECT *
FROM dados_gravadora_with_type();
