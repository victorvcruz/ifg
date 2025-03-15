import java.util.ArrayList;
import java.util.List;

public class Cliente {

    private String nome;
    private List<Veiculo> veiculos = new ArrayList<Veiculo>();

    public Cliente(String nome) {
        this.nome = nome;
    }

    public void alugarVeiculo(Veiculo veiculo) {
        System.out.printf("### Cliente %s alugando um %s\n", this.nome, veiculo.getClass().getSimpleName().toLowerCase());

        if (veiculo.getAlugado()) {
            System.out.printf("Veículo %s já está alugado\n\n", veiculo.getModelo());
            return;
        }

        veiculo.alugar();
        this.veiculos.add(veiculo);
        System.out.printf("Veículo %s alugado.\n\n", veiculo.getModelo());
    }

    public void devolverVeiculo(Veiculo veiculo) {
        System.out.printf("### Cliente %s devolvendo um %s\n", this.nome, veiculo.getClass().getSimpleName().toLowerCase());
        if (!veiculo.getAlugado()) {
            System.out.printf("Veículo %s não está alugado\n\n", veiculo.getModelo());
            return;
        }
        veiculo.devolver();
        this.veiculos.remove(veiculo);
        System.out.printf("Veículo %s devolvido.\n\n", veiculo.getModelo());
    }
}
