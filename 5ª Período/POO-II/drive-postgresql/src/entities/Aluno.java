package entities;

import java.util.Date;

public class Aluno {

    private Integer id;
    private String nome;
    private String sexo;
    private Date dt_nasc;

    public Aluno() {
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public void setDt_nasc(Date dt_nasc) {
        this.dt_nasc = dt_nasc;
    }

    public String getNome() {
        return nome;
    }

    public String getSexo() {
        return sexo;
    }

    public Date getDt_nasc() {
        return dt_nasc;
    }

    public Integer getId() {
        return id;
    }

    @Override
    public String toString() {
        return "Aluno{" +
                "id=" + id +
                ", nome='" + nome + '\'' +
                ", sexo='" + sexo + '\'' +
                ", dt_nasc=" + dt_nasc +
                '}';
    }
}

