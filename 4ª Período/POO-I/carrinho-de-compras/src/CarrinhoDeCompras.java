public class CarrinhoDeCompras {
    private String[] itens;
    private int[] quantidades;
    private double[] precos;
    private double total;
    private int contador;

    public CarrinhoDeCompras() {
        this.itens = new String[100];
        this.quantidades = new int[100];
        this.precos = new double[100];
        this.total = 0.0;
        this.contador = 0;
    }

    public void adicionarItem(String item, int quantidade, double preco) {
        this.itens[this.contador] = item;
        this.quantidades[this.contador] = quantidade;
        this.precos[this.contador] = preco;
        this.total += quantidade * preco;
        this.contador++;
    }

    public void removerItem(String item) {
        for (int i = 0; i < this.contador; i++) {
            if (this.itens[i].equals(item)) {
                this.total -= this.quantidades[i] * this.precos[i];
                for (int j = i; j < this.contador - 1; j++) {
                    this.itens[j] = this.itens[j + 1];
                    this.quantidades[j] = this.quantidades[j + 1];
                    this.precos[j] = this.precos[j + 1];
                }
                this.contador--;
                return;
            }
        }
        System.out.println("Produto não encontrado.");
    }

    public double calcularTotal() {
        return this.total;
    }

    public void exibirResumo() {
        for (int i = 0; i < this.contador; i++) {
            System.out.println(this.itens[i] + " - " + this.quantidades[i] + " x R$ " + this.precos[i]);
        }
        System.out.println("Total: R$ " + this.total);
    }
}

