import java.util.ArrayList;
import java.util.List;

public class Orientador {

    private String nome;
    private List<Estudante> estudantes = new ArrayList<>();

    public Orientador(String nome) {
        this.nome = nome;
    }

    public void addEstudante(Estudante estudante) {
        if (this.estudantes.size() >= 2) {
            throw new LimiteEstudantesException("Limite de estudantes atingido");
        }

        for (Estudante o : this.estudantes) {
            if (estudante.getMatricula().equals(o.getMatricula())) {
                return;
            }
        }

        this.estudantes.add(estudante);
        estudante.addOrientador(this);
    }

    public String getNome() {
        return nome;
    }

    @Override
    public String toString() {
        List<Integer> matriculas = new ArrayList<>();
        for (Estudante estudante : estudantes) {
            matriculas.add(estudante.getMatricula());
        }

        return "Orientador{" +
                "nome='" + nome + '\'' +
                ", estudantes=" + matriculas + "}";
    }
}
