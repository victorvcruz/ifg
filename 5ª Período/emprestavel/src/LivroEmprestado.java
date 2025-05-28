public class LivroEmprestado {

    private Livro livro;
    private  String dataEmprestimo;

    public LivroEmprestado(Livro livro, String dataEmprestimo) {
        this.livro = livro;
        this.dataEmprestimo = dataEmprestimo;
    }

    public String getDataEmprestimo() {
        return dataEmprestimo;
    }

    public Livro getLivro() {
        return livro;
    }
}
