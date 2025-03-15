import java.util.ArrayList;
import java.util.List;

public class Professor {

    private String nome;
    private List<Orientacao> orientacoes = new ArrayList<Orientacao>();

    public Professor(String nome) {
        this.nome = nome;
    }

    public boolean addOrientacao(Orientacao orientacao) {
        orientacao.setOrientador(this);
        if (orientacao != null) {
            orientacoes.add(orientacao);
            return true;
        }
        return false;
    }

    public boolean removeOrientacao(Orientacao orientacao) {
        if (orientacao != null) {
            orientacoes.remove(orientacao);
            return true;
        }
        return false;
    }

    public List<Orientacao> listarOrientacoes() {
        System.out.println("Orientações do professor(a) " + nome + ":");
        for (Orientacao orientacao : orientacoes) {
            System.out.println("\t— " + orientacao);
        }
        System.out.print("\n");
        return orientacoes;
    }

    @Override
    public String toString() {
        return "Professor{" +
                "nome='" + nome + '\'' +
                '}';
    }
}
