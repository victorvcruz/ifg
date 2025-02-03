public class Main {
    public static void main(String[] args) {
        Monitor m1 = new Monitor("Samsung");
        Monitor m2 = new Monitor("LG");
        Monitor m3 = new Monitor("Positivo");

        Computador c1 = new Computador("João");
        Computador c2 = new Computador("Maria");

        System.out.println(c1);
        System.out.println(c2);

        System.out.println(c1.addMonitor(m1));
        System.out.println(c2.addMonitor(m2));
        System.out.println(c2.addMonitor(m3));

        System.out.println(c1);
        System.out.println(c2);

        Pessoa aluno = new Aluno();
    }
}