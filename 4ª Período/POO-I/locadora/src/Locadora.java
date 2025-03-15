import java.util.ArrayList;
import java.util.List;

public class Locadora {

    private List<Veiculo> veiculos = new ArrayList<Veiculo>();
    private List<Cliente> clientes = new ArrayList<Cliente>();

    public void adicionarVeiculo(Veiculo veiculo) {
        this.veiculos.add(veiculo);
    }

    public void cadastrarCliente(Cliente cliente) {
        this.clientes.add(cliente);
    }

    @Override
    public String toString() {
        List<String> listStr = new ArrayList<String>();
        for (Veiculo veiculo : veiculos) {
            listStr.add(veiculo.toString());
        }
        return "### Status dos Veículos ###\nLocadora Veículos: [" + String.join(", ", listStr) + "]";
    }
}
