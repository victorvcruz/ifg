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
        NomeMusica: 'Maria Maria',
        Duracao: '00:03:30'
    },
    {
        idMusica: 91,
        NomeMusica: 'Travessia',
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
        idMusica: 291
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




