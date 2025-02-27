public class Carro {

    private String modelo;
    private Motor motor;

    public Carro(String modelo, String fabricanteDoMotor, String tipoCombustivelDoMotor) {
        this.modelo = modelo;
        this.motor = new Motor(fabricanteDoMotor, tipoCombustivelDoMotor);
    }

    public void trocarMotor(String fabricante, String tipoCombustivel) {
        this.motor = new Motor(fabricante, tipoCombustivel);
    }
}
