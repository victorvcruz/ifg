public enum Status {
    MATRICULADO(1),
    CURSANDO(2),
    CONCLUIDO(3),
    TRANCADO(4),
    REPROVADO(5);

    private int codigo;

    Status(int codigo) {
        this.codigo = codigo;
    }

    public int getCodigo() {
        return codigo;
    }
}