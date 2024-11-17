public class Main {
    public static void main(String[] args) {

        CarrinhoDeCompras carrinho = new CarrinhoDeCompras();

        carrinho.adicionarItem("Arroz", 2, 10.0);
        carrinho.adicionarItem("Feijão", 1, 8.0);
        carrinho.adicionarItem("Macarrão", 3, 5.0);
        carrinho.removerItem("Amendoim");

        System.out.println("Total: R$ " + carrinho.calcularTotal());

        System.out.println("Resumo:");
        carrinho.exibirResumo();

        carrinho.removerItem("Feijão");

        System.out.println("Resumo:");
        carrinho.exibirResumo();
    }
}