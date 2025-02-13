CREATE DATABASE CD;

CREATE TABLE autor
(
    id_autor   INT PRIMARY KEY,
    nome_autor VARCHAR(60) NOT NULL
);

CREATE TABLE musica
(
    id_musica   INT PRIMARY KEY,
    nome_musica VARCHAR(60) NOT NULL,
    duracao     TIME
);

CREATE TABLE musica_autor
(
    id_autor  INT,
    id_musica INT,
    FOREIGN KEY (id_autor) REFERENCES autor (id_autor),
    FOREIGN KEY (id_musica) REFERENCES musica (id_musica)
);

CREATE TABLE gravadora
(
    id_gravadora   INT PRIMARY KEY,
    nome_gravadora VARCHAR(50) NOT NULL,
    endereco       VARCHAR(50),
    telefone       VARCHAR(20),
    contato        VARCHAR(20),
    url            VARCHAR(80)
);

CREATE TABLE cd
(
    id_cd           INT PRIMARY KEY,
    cd_indicado     INT,
    id_gravadora    INT,
    nome_cd         VARCHAR(60) NOT NULL,
    preco_venda     decimal,
    data_lancamento date,
    FOREIGN KEY (id_gravadora) REFERENCES gravadora (id_gravadora)
);

CREATE TABLE faixa
(
    numero_faixa INT PRIMARY KEY,
    id_musica    INT,
    id_cd        INT,
    FOREIGN KEY (id_musica) REFERENCES musica (id_musica),
    FOREIGN KEY (id_cd) REFERENCES cd (id_cd)
);
