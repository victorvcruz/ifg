package application;

import java.util.List;
import java.sql.Date;

import entities.Aluno;
import jdbc.AlunoJDBC;

public class Principal {

    public static void main(String[] args) {

        Aluno aluno1 = new Aluno();
        aluno1.setNome("Lucas");
        aluno1.setSexo("Masculino");
        aluno1.setDt_nasc(new java.util.Date());

        Aluno aluno2 = new Aluno();
        aluno2.setNome("Maria");
        aluno2.setSexo("Feminino");
        aluno2.setDt_nasc(new java.util.Date());

        AlunoJDBC alunoJDBC = new AlunoJDBC();

        alunoJDBC.salvar(aluno1);
        alunoJDBC.salvar(aluno2);

        System.out.println("Alunos cadastrados com sucesso!");
        List<Aluno> alunos = alunoJDBC.listar();
        for (Aluno aluno : alunos) {
            System.out.println(aluno);
        }

        aluno1.setNome("Lucas Silva");
        alunoJDBC.alterar(aluno1);

        System.out.println("Aluno atualizado com sucesso!");
        alunos = alunoJDBC.listar();
        for (Aluno aluno : alunos) {
            System.out.println(aluno);
        }
    }
}