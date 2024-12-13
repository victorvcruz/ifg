import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.util.Locale;
import java.util.Scanner;
import java.io.File;
import java.io.FileOutputStream;
import java.io.PrintStream;


public class ControleProduto {

    private Produto[] produtos;
    private int numProdutos;

    public ControleProduto(int capacidade) {
        this.produtos = new Produto[capacidade];
    }

    public void carregaProdutos() throws FileNotFoundException {
        InputStream arquivo = new FileInputStream("produtos.txt");
        System.setIn(arquivo);
        Scanner scan = new Scanner(System.in);
        while (scan.hasNextLine()) {
            int id = scan.nextInt();
            String nome = scan.next();
            double valor = scan.nextDouble();
            int quantidade = scan.nextInt();

            this.produtos[this.numProdutos] = new Produto(
                    id, nome, valor, quantidade
            );
            this.numProdutos++;
        }
    }

    public Produto procurarProdutosPorId(int id) {
        for (int i = 0; i < this.numProdutos; i++) {
            if (this.produtos[i].getId() == id) {
                return this.produtos[i];
            }
        }
        return null;
    }

    public void atualizaArquivoProduto() throws FileNotFoundException {
        File arquivo = new File("produtos.txt");
        FileOutputStream strDados = new FileOutputStream(arquivo);
        PrintStream escreve_no_arquivo = new PrintStream(strDados);
        System.setOut(escreve_no_arquivo);
        for (int i = 0; i < this.numProdutos; i++) {
            if (i == this.numProdutos - 1) {
                System.out.print(this.produtos[i]);
                continue;
            }
            System.out.println(this.produtos[i]);
        }
    }
}
