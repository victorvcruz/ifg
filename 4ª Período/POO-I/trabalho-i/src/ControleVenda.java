import java.io.*;
import java.util.Scanner;

public class ControleVenda {

    private Venda[] vendas;
    private int numVendas;

    public ControleVenda(int capacidade) {
        this.vendas = new Venda[capacidade];
    }

    public void carregaVendas() throws FileNotFoundException {
        InputStream arquivo = new FileInputStream("vendas.txt");
        System.setIn(arquivo);
        Scanner scan = new Scanner(System.in);
        while (scan.hasNextLine()) {
            int id = scan.nextInt();
            int quantidade = scan.nextInt();
            double valor = scan.nextDouble();

            this.vendas[this.numVendas] = new Venda(
                    id,
                    quantidade,
                    valor
            );
            this.numVendas++;
        }
    }

    public void registrarVendas(int idProduto, int qtde, ControleProduto controleProduto) throws FileNotFoundException {
        Produto produto = controleProduto.procurarProdutosPorId(idProduto);
        if (produto == null) {
            return;
        }
        if (produto.verificaEstoque(qtde)) {
            produto.reduzEstoque(qtde);
            this.vendas[this.numVendas] = new Venda(
                    idProduto,
                    qtde,
                    produto.getValor() * qtde
            );
            this.numVendas++;
        }
        controleProduto.atualizaArquivoProduto();
        this.atualizaArquivoVendas();
    }

    public void atualizaArquivoVendas() throws FileNotFoundException {
        File arquivo = new File("vendas.txt");
        FileOutputStream strDados = new FileOutputStream(arquivo);
        PrintStream escreve_no_arquivo = new PrintStream(strDados);
        System.setOut(escreve_no_arquivo);
        for (int i = 0; i < this.numVendas; i++) {
            if (i == this.numVendas - 1) {
                System.out.print(this.vendas[i]);
                continue;
            }
            System.out.println(this.vendas[i]);
        }
    }


}
