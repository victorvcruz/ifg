-- Victor Hugo Vieira Cruz

--1) Escreva o comando para inserir um novo autor chamado "Milton Nascimento" que tenha composto as músicas de ID 90 e 91

--Script SQL (PostgreSQl) – Valor 0,2:

INSERT INTO Autor (idAutor, Nome_Autor)
VALUES (1, 'Milton Nascimento')
RETURNING idAutor;

INSERT INTO Musica (idMusica, NomeMusica, Duracao) VALUES (90, 'Musica 1', '00:03:30');
INSERT INTO Musica (idMusica, NomeMusica, Duracao) VALUES (91, 'Musica 2', '00:03:30');

INSERT INTO Musica_tem_Autor (idAutor, idMusica)
VALUES
    (1, 90),
    (1, 91);

--Script MQL (MongoDB) – Valor 0,1:

db.Autor.insertOne({
    iDAutor: 1,
    Nome_Autor: 'Milton Nascimento'
});

db.Musica.insertMany([
    {
        idMusica: 90,
        NomeMusica: 'Musica 1',
        Duracao: '00:03:30'
    },
    {
        idMusica: 91,
        NomeMusica: 'Musica 2',
        Duracao: '00:03:30'
    }
]);

db.Musica_tem_Autor.insertMany([
    {
        idAutor: 1,
        idMusica: 90
    },
    {
        idAutor: 1,
        idMusica: 91
    }
]);

--2) Escreva o comando para atualizar o preço do CD "Perfil" para R$12,00.

--Script SQL (PostgreSQl) – Valor 0,2:

UPDATE CD
SET Preco_Venda = 12.00
WHERE Nome_CD = 'Perfil';

--Script MQL (MongoDB) – Valor 0,1:

db.CD.updateOne(
    { nome_cd: 'Perfil' },
    { $set: { preco_venda: 12.00 } }
);

--3) Escreva o comando para remover todas as músicas cujo tempo de duração seja inferior a 2 minutos e 30 segundos.

--Script SQL (PostgreSQl) – Valor 0,2:

DELETE FROM Musica_tem_Autor
WHERE idMusica IN (SELECT idMusica FROM Musica WHERE Duracao < '00:02:30');

DELETE FROM Faixa
WHERE idMusica IN (SELECT idMusica FROM Musica WHERE Duracao < '00:02:30');

DELETE FROM Musica WHERE Duracao < '00:02:30';

--Script MQL (MongoDB) – Valor 0,1:

db.Musica.find({ Duracao: { $lt: '00:03:40' } }).forEach(function(doc) {
    db.Musica_tem_Autor.deleteMany({ idMusica: doc.idMusica });
    db.Faixa.deleteMany({ idMusica: doc.idMusica });
    db.Musica.deleteOne({ idMusica: doc.idMusica });
});

--4) Escreva o comando para adicionar a música "Travessia" (ID 92) ao CD "Elis Regina - Essa Mulher".

--Script SQL (PostgreSQl) – Valor 0,2:

INSERT INTO Musica (idMusica, NomeMusica, Duracao) VALUES (92, 'Travessia', '00:03:30');

INSERT INTO Faixa (Numero_Faixa, idCD, idMusica) VALUES (1, 1, 92);

INSERT INTO Musica_tem_Autor (idAutor, idMusica) VALUES (1, 92);

--Script MQL (MongoDB) – Valor 0,1:

db.Musica.insertOne({
    idMusica: 92,
    NomeMusica: 'Travessia',
    Duracao: '00:03:30'
});

db.Faixa.insertOne({
    Numero_Faixa: 1,
    idCD: 1,
    idMusica: 92
});

db.Musica_tem_Autor.insertOne({
    idAutor: 1,
    idMusica: 92
});

--5) Escreva o comando para atualizar o contato da gravadora "BMG" para "Carlos".

--Script SQL (PostgreSQl) – Valor 0,2:

UPDATE Gravadora
SET Contato = 'Carlos'
WHERE NomeGravadora = 'BMG';

--Script MQL (MongoDB) – Valor 0,1:

db.Gravadora.updateOne(
    { NomeGravadora: 'BMG' },
    { $set: { Contato: 'Carlos' } }
);

--6) Escreva o comando para remover todos os CDs lançados antes de 1990.

--Script SQL (PostgreSQl) – Valor 0,2:

DELETE FROM CD
WHERE Dt_Lancamento < '1990-01-01';

--Script MQL (MongoDB) – Valor 0,1:

db.CD.deleteMany({ Dt_Lancamento: { $lt: new Date('1990-01-01') } });

--7) Escreva a operação da álgebra relacional e o comando SQL para listar todas as músicas compostas por "Renato Russo".

-- Álgebra Relacional – Valor 0,1:

σNome_Autor='RenatoRusso'(Autor)

Musicas_de_Renato_Russo=πidMusica(σNome_Autor= 'RenatoRusso'(Autor)⋈Musica_tem_Autor)

πNomeMusica​(Musica⋈Musicas_de_Renato_Russo)

-- Script SQL (PostgreSQl) – Valor 0,1:

SELECT M.NomeMusica
FROM Musica M
JOIN Musica_tem_Autor MA ON M.idMusica = MA.idMusica
JOIN Autor A ON MA.idAutor = A.idAutor
WHERE A.Nome_Autor = 'Renato Russo';

--8) Escreva uma função em PL/PgSql que controle a inserção de novos registros na tabela CD. A função deve garantir que (Valor 1,0):
--a) a data de lançamento (dt_lancamento) não seja no futuro.
--b) o preço de venda (preco_venda) não seja menor que 5 reais.
--c) se o CD for lançado pela gravadora "SOM LIVRE", seu preço não pode ser inferior a 10 reais.
--d) sempre que um novo CD for adicionado, um log deve ser armazenado em uma tabela separada (cd_log).


CREATE TABLE cd_log (
    idLog SERIAL PRIMARY KEY,
    idCD INTEGER,
    Nome_CD VARCHAR(60),
    Dt_Lancamento DATE,
    Preco_Venda DECIMAL(14, 2),
    idGravadora INTEGER,
    Data_Log TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE OR REPLACE FUNCTION controle_insercao_cd()
RETURNS TRIGGER AS $$
BEGIN
    IF NEW.Dt_Lancamento > CURRENT_DATE THEN
        RAISE EXCEPTION 'A data de lançamento não pode ser no futuro';
    END IF;

    IF NEW.Preco_Venda < 5 THEN
        RAISE EXCEPTION 'O preço de venda não pode ser menor que 5 reais';
    END IF;

    IF EXISTS (SELECT 1 FROM Gravadora WHERE idGravadora = NEW.idGravadora AND NomeGravadora = 'SOM LIVRE')
       AND NEW.Preco_Venda < 10 THEN
        RAISE EXCEPTION 'Para a gravadora "SOM LIVRE", o preço de venda não pode ser inferior a 10 reais';
    END IF;

    INSERT INTO cd_log(idCD, Nome_CD, Dt_Lancamento, Preco_Venda, idGravadora)
    VALUES (NEW.idCD, NEW.Nome_CD, NEW.Dt_Lancamento, NEW.Preco_Venda, NEW.idGravadora);

    RETURN NEW;
END;
$$ LANGUAGE plpgsql;

CREATE TRIGGER before_insert_cd
BEFORE INSERT ON CD
FOR EACH ROW
EXECUTE FUNCTION controle_insercao_cd();