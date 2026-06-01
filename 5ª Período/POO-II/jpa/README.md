# JPA

This project is a **Book Management System** built using Java, Maven, and SQL. It demonstrates the use of JPA (Jakarta Persistence API) for database operations and includes entities such as `Book`, `Author`, `Publisher`, and their relationships.

## Features

- Manage books, authors, and publishers.
- Support for different types of publications: **Printed**, **Digital**, and **Audiobook**.
- Relational database integration using JPA.
- Example data insertion in the `Main` class.

## Technologies Used

- **Java**: Programming language.
- **Maven**: Dependency management and build tool.
- **JPA**: For ORM (Object-Relational Mapping).
- **PostgreSQL**: Relational database.
- **Jakarta Persistence**: For database transactions.

## Database Schema

The database schema includes the following tables:

- `editora`: Stores publisher information.
- `autor`: Stores author information.
- `livro`: Stores book information, including type, price, and publisher.
- `livro_autor`: Many-to-many relationship between books and authors.

### SQL Schema

```sql
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
```

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/victorvcruz/book-management-system.git
   cd book-management-system
   ```

2. Configure the database:
    - Ensure PostgreSQL is installed and running.
    - Create a database and execute the SQL schema provided above.

3. Build the project using Maven:
   ```bash
   mvn clean install
   ```

4. Run the application:
   ```bash
   mvn exec:java -Dexec.mainClass="br.com.ifg.Main"
   ```

5. Check the console for the message: `Dados inseridos com sucesso!`.