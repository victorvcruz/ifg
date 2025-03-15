import java.text.SimpleDateFormat;
import java.util.Date;

public class Atualizacao {

    private Date data;
    private String descricao;

    public Atualizacao(Date data, String descricao) {
        this.data = data;
        this.descricao = descricao;
    }

    @Override
    public String toString() {
        SimpleDateFormat isoFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSSSS");
        return "Atualização em " + isoFormat.format(data) + ": " + descricao;
    }
}
