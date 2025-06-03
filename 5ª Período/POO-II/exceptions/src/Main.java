public class Main {
    public static void main(String[] args) {
        Estudante estudante1 = new Estudante(1);
        Estudante estudante2 = new Estudante(2);
        Estudante estudante3 = new Estudante(2);

        Orientador orientador = new Orientador("Dr. Silva");
        Orientador orientador2 = new Orientador("Dr. Souza");
        Orientador orientador3 = new Orientador("Dr. Santos");
        Orientador orientador4 = new Orientador("Dr. Oliveira");

        try {
            orientador.addEstudante(estudante1);
            orientador.addEstudante(estudante2);
            orientador.addEstudante(estudante3);
        }  catch (LimiteEstudantesException e) {
            System.out.println("Limite de estudantes atingido");
        }

        try {
            estudante2.addOrientador(orientador2);
            estudante2.addOrientador(orientador3);
            estudante2.addOrientador(orientador4);
        } catch (LimiteOrientadorException e) {
            System.out.println("Limite de orientadores atingido");
        }

        System.out.println("Estudante 1: " + estudante1);
        System.out.println("Orientador 1: " + orientador);
        System.out.println("Estudante 2: " + estudante2);
        System.out.println("Orientador 2: " + orientador2);
        System.out.println("Orientador 3: " + orientador3);
        System.out.println("Orientador 4: " + orientador4);
    }
}