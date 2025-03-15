public class Main {
    public static void main(String[] args) {

        Aluno aluno1 = new Aluno("123", "João");
        Aluno aluno2 = new Aluno("456", "Maria");

        Orientacao orientacao1 = new Orientacao(aluno1, "Título 1");
        Orientacao orientacao2 = new Orientacao(aluno2, "Título 2");
        Orientacao orientacao3 = new Orientacao(aluno1, "Título 3");

        Professor professor1 = new Professor("Maria");

        professor1.addOrientacao(orientacao1);
        professor1.addOrientacao(orientacao2);
        professor1.addOrientacao(orientacao3);
        professor1.removeOrientacao(orientacao2);
        professor1.listarOrientacoes();
    }
}