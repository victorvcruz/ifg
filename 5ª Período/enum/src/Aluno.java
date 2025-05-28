import java.util.ArrayList;
import java.util.List;

public class Aluno {
    public String cpf;
    public  String nome;
    public List<Matricula> matriculas = new ArrayList<>();

    public Aluno(String cpf, String nome) {
        this.cpf = cpf;
        this.nome = nome;
    }

    @Override
    public String toString() {
        return "Aluno{" +
                "cpf='" + cpf + '\'' +
                ", nome='" + nome + '\'' +
                '}';
    }

    public void adicionarMatricula(Matricula matricula) {
        for (Matricula m : matriculas) {
           if(m == matricula) {
               return;
           }
        }

        this.matriculas.add(matricula);
    }

    public List<Matricula> getMatriculas() {
        return matriculas;
    }
}
