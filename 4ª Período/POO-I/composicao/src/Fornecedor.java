public class Fornecedor {

    private  String razaoSocial;
    private Contato contato;

    public Fornecedor(String razaoSocial) {
        this.razaoSocial = razaoSocial;
    }

    public boolean addContato(Contato contato) {
        if (this.contato == null) {
            this.contato = contato;
            return true;
        }
        return false;
    }

    public boolean removerContato() {
        if (this.contato != null) {
            this.contato = null;
            return true;
        }
        return false;
    }
}
