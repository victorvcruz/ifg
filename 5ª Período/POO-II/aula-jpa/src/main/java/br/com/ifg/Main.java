package br.com.ifg;

import br.com.ifg.entities.Aluno;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.Persistence;

import java.time.LocalDate;


public class Main {
    public static void main(String[] args) {

        EntityManagerFactory emf = Persistence.createEntityManagerFactory("aulajpa");
        EntityManager em = emf.createEntityManager();
        em.getTransaction().begin();
        Aluno aluno = new Aluno( "João", "Masculino", LocalDate.of(2000, 1, 1));

        em.persist(aluno);
        em.close();

        System.out.println("Hello world!");
    }
}