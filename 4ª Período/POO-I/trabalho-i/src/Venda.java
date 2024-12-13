public class Venda {

    private int idProduto;
    private int quantidade;
    private double valorTotal;

    public Venda(int id, int qtde, double valor) {
        this.idProduto = id;
        this.quantidade = qtde;
        this.valorTotal = valor;
    }

    @Override
    public String toString() {
        return String.format("%d %d %.2f",
                this.idProduto, this.quantidade, this.valorTotal
        );
    }
}
