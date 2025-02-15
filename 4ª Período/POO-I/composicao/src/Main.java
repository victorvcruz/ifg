import java.util.List;

public class Main {
    public static void main(String[] args) {

        Carro carro = new Carro("Fusca", "Volkswagen", "Gasolina");

        carro.trocarMotor("Chevrolet", "Álcool");

        NotaFiscal nf = new NotaFiscal("301AN", "Lápis", 1);

        nf.addItem("Lápis", 1);
        nf.addItem("Caneta", 2);
        nf.addItem("Borracha", 3);
        nf.addItem("Lápis", 1);

        nf.removerItem("Caneta");

        System.out.println(nf);
    }
}