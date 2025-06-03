import java.util.ArrayList;
import java.util.List;

public class Estudante {

    private Integer matricula;
    private List<Orientador> orientadores = new ArrayList<>();

    public Estudante(Integer matricula) {
        this.matricula = matricula;
    }

    public void addOrientador(Orientador orientador) {
        if (this.orientadores.size() >= 3) {
            throw new LimiteOrientadorException("Limite de estudantes atingido");
        }

        for (Orientador o : this.orientadores) {
            if (orientador.getNome().equals(o.getNome())) {
                return;
            }
        }

        this.orientadores.add(orientador);
        orientador.addEstudante(this);
    }

    public Integer getMatricula() {
        return matricula;
    }

    @Override
    public String toString() {
        List<String> nomes = new ArrayList<>();
        for (Orientador orientador : orientadores) {
            nomes.add(orientador.getNome());
        }

        return "Estudante{" +
                "matricula=" + matricula +
                ", orientadores=" + nomes +
                '}';
    }
}
