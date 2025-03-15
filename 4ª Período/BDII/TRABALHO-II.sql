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

--