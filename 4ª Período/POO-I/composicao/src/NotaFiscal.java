import java.util.ArrayList;
import java.util.List;

public class NotaFiscal {

    private String codigo;
    private List<Item> itens = new ArrayList<Item>();

    public NotaFiscal(String codigo, String descricao, int qtde){
        this.codigo = codigo;
        this.addItem(descricao, qtde);
    }

    public boolean addItem(String descricao, int qtde){
        for (Item item : this.itens) {
            if (item.getDescricao().equals(descricao)) {
                item.addQtde(qtde);
                return true;
            }
        }

        Item item = new Item(descricao, qtde);
        this.itens.add(item);
        return true;
    }

    public boolean removerItem(String descricao){
        for (Item item : this.itens) {
            if (item.getDescricao().equals(descricao)) {
                this.itens.remove(item);
                return true;
            }
        }
        return false;
    }

    @Override
    public String toString() {
        return "NotaFiscal{" +
                "codigo='" + codigo + '\'' +
                ", itens=" + itens +
                '}';
    }
}
