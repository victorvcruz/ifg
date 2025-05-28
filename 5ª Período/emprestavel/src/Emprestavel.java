public interface Emprestavel {
    public void emprestarLivro(Livro livro, Usuario usuario);
    public void receberDevolucao(Livro livro, Usuario usuario);
}
