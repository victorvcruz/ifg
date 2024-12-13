import java.io.FileNotFoundException;

public class Programa {
    public static void main(String[] args) throws FileNotFoundException {
        ControleProduto controleProduto = new ControleProduto(10);
        ControleVenda controleVenda = new ControleVenda(10);

        controleProduto.carregaProdutos();
        controleVenda.carregaVendas();

        controleVenda.registrarVendas(1, 3, controleProduto);
        controleVenda.registrarVendas(2, 1, controleProduto);
        controleVenda.registrarVendas(3, 1, controleProduto);
    }
}