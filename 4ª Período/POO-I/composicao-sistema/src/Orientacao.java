import java.util.Objects;

public class Orientacao {

    private Professor orientador;
    private Aluno orientando;
    private String titulo;

    public Orientacao(Professor orientador, Aluno orientando, String titulo) {
        this.orientador = orientador;
        this.orientando = orientando;
        this.titulo = titulo;
    }

    public Orientacao(Aluno orientando, String titulo) {
        this.orientando = orientando;
        this.titulo = titulo;
    }

    public void setOrientador(Professor orientador) {
        this.orientador = orientador;
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Orientacao that = (Orientacao) o;
        return Objects.equals(orientador, that.orientador) && Objects.equals(orientando, that.orientando) && Objects.equals(titulo, that.titulo);
    }

    @Override
    public int hashCode() {
        return Objects.hash(orientador, orientando, titulo);
    }

    @Override
    public String toString() {
        return "Orientacao{" +
                "orientador=" + orientador +
                ", orientando=" + orientando +
                ", titulo='" + titulo + '\'' +
                '}';
    }
}
