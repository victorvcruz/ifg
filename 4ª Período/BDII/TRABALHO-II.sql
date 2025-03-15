-- Victor Hugo Vieira Cruz

--1) Escreva o comando para inserir um novo autor chamado "Milton Nascimento" que tenha composto as músicas de ID 90 e 91

--Script SQL (PostgreSQl) – Valor 0,2:

INSERT INTO Autor (Nome_Autor)
VALUES ('Milton Nascimento')
RETURNING idAutor;

INSERT INTO Musica (NomeMusica, Duracao) VALUES ('Maria Maria', '00:03:30');
INSERT INTO Musica (NomeMusica, Duracao) VALUES ('Travessia', '00:03:30');

INSERT INTO Musica_tem_Autor (idAutor, idMusica)
VALUES
    (1, 1),
    (1, 2);

--Script MQL (MongoDB) – Valor 0,1:

db.Autor.insertOne({
    Nome_Autor: 'Milton Nascimento'
});

db.Musica.insertMany([
    {
        NomeMusica: 'Musica 1',
        Duracao: '00:03:30'
    },
    {
        NomeMusica: 'Musica 2',
        Duracao: '00:03:30'
    }
]);

db.Musica_tem_Autor.insertMany([
    {
        idAutor: 1,
        idMusica: 1
    },
    {
        idAutor: 1,
        idMusica: 2
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

