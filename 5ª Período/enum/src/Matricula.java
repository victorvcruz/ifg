import java.util.Date;

public class Matricula {

    private Date dataMatricual;
    private Turma turma;
    private Status status;
    private Aluno aluno;
    private Disciplina disciplina;

    public Matricula(Aluno aluno, Turma turma, Disciplina disciplina) {
        this.dataMatricual = new Date();
        this.turma = turma;
        this.status = Status.MATRICULADO;
        this.aluno = aluno;
        this.disciplina = disciplina;
        aluno.adicionarMatricula(this);
    }

    public void confirmar() {
        if (this.status == Status.TRANCADO || this.status == Status.MATRICULADO) {
            this.status = Status.CURSANDO;
        }
    }

    public void trancar() {
        if (this.status == Status.CURSANDO) {
            this.status = Status.TRANCADO;
        }
    }

    public void aprovar() {
        if (this.status == Status.CURSANDO) {
            this.status = Status.CONCLUIDO;
        }
    }

    public void reprovar() {
        if (this.status == Status.CURSANDO) {
            this.status = Status.REPROVADO;
        }
    }

    public Turma getTurma() {
        return turma;
    }

    public Date getDataMatricual() {
        return dataMatricual;
    }

    public Status getStatus() {
        return status;
    }

    public Aluno getAluno() {
        return aluno;
    }

    public Disciplina getDisciplina() {
        return disciplina;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this) {
            return true;
        }

        if (!(o instanceof Matricula)) {
            return false;
        }

        Matricula c = (Matricula) o;

        return this.turma.equals(c.turma) &&
               this.disciplina.equals(c.disciplina) &&
               this.aluno.equals(c.aluno) &&
               this.dataMatricual.equals(c.dataMatricual) &&
               this.status == c.status;
    }


    @Override
    public String toString() {
        return "Matricula{" +
                "dataMatricual=" + dataMatricual +
                ", turma=" + turma +
                ", status=" + status +
                ", aluno=" + aluno +
                ", disciplina=" + disciplina +
                '}';
    }
}
