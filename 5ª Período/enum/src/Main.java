public class Main {
    public static void main(String[] args) {
        Aluno aluno = new Aluno("12345678900", "João Silva");
        Aluno aluno2 = new Aluno("09876543211", "Maria Oliveira");

        Turma turma = new Turma(1, "Turma A");
        Turma turma2 = new Turma(2, "Turma B");

        Disciplina disciplina = new Disciplina("Matemática", 60);
        Disciplina disciplina2 = new Disciplina("História", 40);

        Matricula matricula = new Matricula(aluno, turma, disciplina);
        matricula.reprovar();

        Matricula matricula2 = new Matricula(aluno, turma2, disciplina2);
        matricula2.confirmar();

        Matricula matricula3 = new Matricula(aluno2, turma, disciplina);
        matricula3.trancar();

        System.out.println("Matriculas do aluno " + aluno.nome + ":");
        for (Matricula m : aluno.getMatriculas()) {
            System.out.println(m);
        }

        System.out.println("Matriculas do aluno " + aluno2.nome + ":");
        for (Matricula m : aluno2.getMatriculas()) {
            System.out.println(m);
        }
    }
}