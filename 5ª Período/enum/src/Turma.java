public class Turma {

    private Integer id;
    private String nome;

    public Turma(Integer id, String nome) {
        this.id = id;
        this.nome = nome;
    }

    @Override
    public String toString() {
        return "Turma{" +
                "id=" + id +
                ", nome='" + nome + '\'' +
                '}';
    }
}
