import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class Tarefa {

    private String titulo;
    private String descricao;
    private Date dataVencimento;
    private List<Atualizacao> atualizacoes = new ArrayList<Atualizacao>();

    public Tarefa(String titulo, String descricao, Date dataVencimento) {
        this.titulo = titulo;
        this.descricao = descricao;
        this.dataVencimento = dataVencimento;
    }

    public void adicionarAtualizacao(Date data, String descricao) {
        Atualizacao atualizacao = new Atualizacao(data, descricao);
        atualizacoes.add(atualizacao);
    }

    public List<Atualizacao> listarAtualizacoes() {
        System.out.println("Atualizações da tarefa \"" + titulo + "\":");
        for (Atualizacao atualizacao : atualizacoes) {
            System.out.println("\t— " + atualizacao);
        }
        System.out.print("\n");
        return atualizacoes;
    }

    @Override
    public String toString() {
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
        return "Tarefa: " + titulo + " | Vence em: " + sdf.format(dataVencimento);
    }
}
