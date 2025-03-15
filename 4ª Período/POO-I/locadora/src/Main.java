import java.text.CollationKey;

public class Main {
    public static void main(String[] args) {

        Veiculo moto = new Moto("GSX-R", "JAP2025");
        Veiculo carro = new Carro("Caoa Cherry 7 Pro", "BRA2025");
        Veiculo carro2 = new Carro("Volvo FH", "JKL-9012");

        Cliente cliente = new Cliente("Dory");
        Cliente cliente2 = new Cliente("Carol");

        Locadora locadora = new Locadora();

        locadora.adicionarVeiculo(carro);
        locadora.adicionarVeiculo(moto);
        locadora.adicionarVeiculo(carro2);

        locadora.cadastrarCliente(cliente);
        locadora.cadastrarCliente(cliente2);

        cliente.alugarVeiculo(carro);

        cliente2.alugarVeiculo(carro);

        cliente2.alugarVeiculo(moto);

        cliente.devolverVeiculo(carro);

        System.out.println(locadora);
    }
}