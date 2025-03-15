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
        NomeMusica: 'Maria Maria',
        Duracao: '00:03:30'
    },
    {
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
        idMusica: 2
    }
]);

