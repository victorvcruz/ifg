import java.util.List;
import java.util.ArrayList;

public class Livro {

    private String titulo;
    private String autor;
    List<Exemplar> exemplares = new ArrayList<Exemplar>();

    public Livro(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
    }

    public String getTitulo() {
        return titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void addExemplar(Exemplar exemplar) {
        exemplares.add(exemplar);
    }

    public void temExemplarDisponivel() {
        for (Exemplar exemplar : exemplares) {
           if this.
        }
        System.out.println("Exemplar indisponível");
    }

}
