package br.com.ifg;

import br.com.ifg.entities.Autor;
import br.com.ifg.entities.Editora;
import br.com.ifg.entities.Livro;
import br.com.ifg.entities.TipoPublicacao;

import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.Persistence;

import java.math.BigDecimal;
import java.util.HashSet;

public class Main {

    public static void main(String[] args) {
        EntityManagerFactory emf = Persistence.createEntityManagerFactory("jpa");
        EntityManager em = emf.createEntityManager();

        em.getTransaction().begin();

        Editora editora = new Editora();
        editora.setNome("Companhia das Letras");
        editora.setCidade("São Paulo");
        em.persist(editora);

        Autor autor1 = new Autor();
        autor1.setNome("Machado de Assis");
        autor1.setNacionalidade("Brasileira");
        em.persist(autor1);

        Autor autor2 = new Autor();
        autor2.setNome("Clarice Lispector");
        autor2.setNacionalidade("Brasileira");
        em.persist(autor2);

        Livro livro = new Livro();
        livro.setTitulo("Obras-primas da literatura brasileira");
        livro.setAnoPublicacao(2023);
        livro.setIsbn("978-85-359-0277-9");
        livro.setPreco(new BigDecimal("59.90"));
        livro.setTipo(TipoPublicacao.IMPRESSO);

        var autores = new HashSet<Autor>();
        autores.add(autor1);
        autores.add(autor2);
        livro.setAutores(autores);

        livro.setEditora(editora);

        em.persist(livro);

        em.getTransaction().commit();

        System.out.println("Dados inseridos com sucesso!");
    }
}
