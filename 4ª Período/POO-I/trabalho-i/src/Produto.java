public class Produto {

    private int id;
    private String nome;
    private double valor;

    private int quantidade;

    public Produto(int id, String nome, double valor, int quantidade) {
        this.id = id;
        this.nome = nome;
        this.valor = valor;
        this.quantidade = quantidade;
    }

    public void reduzEstoque(int qtde) {
        if (this.verificaEstoque(qtde)) {
            this.quantidade -= qtde;
        }
    }

    public boolean verificaEstoque(int qtde) {
        return this.quantidade >= qtde;
    }

    @Override
    public String toString() {
        return String.format("%d %s %.2f %d",
                this.id, this.nome, this.valor, this.quantidade
        );
    }

    public int getId() {
        return id;
    }

    public String getNome() {
        return nome;
    }

    public double getValor() {
        return valor;
    }

    public int getQuantidade() {
        return quantidade;
    }
}
