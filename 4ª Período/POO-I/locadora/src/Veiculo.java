public class Veiculo implements Alugavel {

    private String modelo;
    private String placa;
    private Boolean alugado;

    public Veiculo(String modelo, String placa) {
        this.modelo = modelo;
        this.placa = placa;
        this.alugado = false;
    }

    public void alugar() {
        this.alugado = true;
    }

    public void devolver() {
        this.alugado = false;
    }

    public Boolean getAlugado() {
        return alugado;
    }

    public String getModelo() {
        return modelo;
    }

    public String getPlaca() {
        return placa;
    }

    @Override
    public String toString() {
        return this.modelo + " - " + this.placa + " - " + (this.alugado ? "(Alugado)" : "(Disponível)");
    }
}
