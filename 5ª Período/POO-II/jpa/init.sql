CREATE TABLE IF NOT EXISTS editora (
                                       id SERIAL PRIMARY KEY,
                                       nome VARCHAR(255) NOT NULL,
    cidade VARCHAR(255) NOT NULL
    );

CREATE TABLE IF NOT EXISTS autor (
                                     id SERIAL PRIMARY KEY,
                                     nome VARCHAR(255) NOT NULL,
    nacionalidade VARCHAR(255) NOT NULL
    );

CREATE TABLE IF NOT EXISTS livro (
                                     id SERIAL PRIMARY KEY,
                                     titulo VARCHAR(255) NOT NULL,
    ano_publicacao INTEGER NOT NULL,
    isbn VARCHAR(20) NOT NULL,
    preco NUMERIC(10, 2) NOT NULL,
    tipo VARCHAR(20) NOT NULL,
    editora_id INTEGER REFERENCES editora(id) ON DELETE SET NULL
    );

CREATE TABLE IF NOT EXISTS livro_autor (
                                           livro_id INTEGER NOT NULL REFERENCES livro(id) ON DELETE CASCADE,
    autor_id INTEGER NOT NULL REFERENCES autor(id) ON DELETE CASCADE,
    PRIMARY KEY (livro_id, autor_id)
    );
