import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class Projeto {

    private String nome;
    private String gerente;
    private List<Tarefa> tarefas = new ArrayList<Tarefa>();

    public Projeto(String nome, String gerente) {
        this.nome = nome;
        this.gerente = gerente;
    }

    public void adicionarTarefa(String titulo, String descricao, Date dataVencimento) {
        Tarefa tarefa = new Tarefa(titulo, descricao, dataVencimento);
        tarefas.add(tarefa);
    }

    public List<Tarefa> listarTarefas() {
        System.out.println("Tarefas do projeto \"" + nome + "\":");
        for (Tarefa tarefa : tarefas) {
            System.out.println("\t— " + tarefa);
        }
        System.out.print("\n");
        return tarefas;
    }
}
