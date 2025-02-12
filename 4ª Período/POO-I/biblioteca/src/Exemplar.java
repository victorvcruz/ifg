public class Exemplar {

    private Livro livro;

    public Exemplar(Livro livro) {
        this.livro = livro;
    }

    public Livro getLivro() {
        return livro;
    }

    public boolean equals(Exemplar exemplar) {
        return this.livro.equals(exemplar.getLivro());
    }
}
