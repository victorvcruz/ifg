public class Item {

    private String descricao;
    private int qtde;

    public Item(String descricao, int qtde){
        this.descricao = descricao;
        this.qtde = qtde;
    }

    public int getQtde() {
        return qtde;
    }

    public void addQtde(int qtde) {
        this.qtde += qtde;
    }

    public String getDescricao() {
        return descricao;
    }

    @Override
    public String toString() {
        return "Item{" +
                "descricao='" + descricao + '\'' +
                ", qtde=" + qtde +
                '}';
    }
}
