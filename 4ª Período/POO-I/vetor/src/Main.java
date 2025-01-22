import entidade.Aluno;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.IntStream;

public class Main {
    public static void main(String[] args) {
        Aluno a1 = new Aluno(1, "João");
        Aluno a2 = new Aluno(2, "Maria");
        Aluno a3 = new Aluno(3, "José");

        List<Aluno> alunos = new ArrayList<>();
        List<Aluno> subLista = new ArrayList<>();

        subLista.add(a1);
        subLista.add(a2);
        subLista.add(a3);

        alunos.addAll(subLista);

        System.out.printf("A lista está vazia? %s\n", alunos.isEmpty() ? "Sim" : "Não");
        System.out.printf("Quantos alunos tem na lista? %d\n", alunos.size());
        System.out.printf("O aluno %s está na lista? %s\n", a1.getNome(), alunos.contains(a1) ? "Sim" : "Não");
        System.out.printf("Conteúdo dos alunos %s", alunos);

        for (Aluno aluno : alunos) {
            System.out.println(aluno);
        }


        alunos.iterator();

        IntStream.range(0, 5).forEach(i -> {
            new Thread(() -> {
                System.out.println("Thread " + i + ": " + i);
            }).start();
        });
    }
}