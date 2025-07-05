package br.com.ifg.entities;

import jakarta.persistence.*;

import java.io.Serializable;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

@Entity
public class Aluno implements Serializable {

    private static final long serialVersionUID = 1L;

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer idaluno;

    @Column(nullable = false)
    private String nome;

    @Column(nullable = false)
    private String sexo;

    @Column(nullable = false)
    private LocalDate dt_nasc;

    @ManyToMany(mappedBy = "aluno")
    private List<Curso> cursos = new ArrayList<>();

    public Aluno() {
    }

    public void adicionarCurso(Curso c) {
        this.cursos.add(c);
        c.adicionarAluno(this);
    }

    public void removerCurso(Curso c) {
        this.cursos.remove(c);
        c.adicionarAluno(this);
    }

    public Aluno( String nome, String sexo, LocalDate dt_nasc) {
        this.nome = nome;
        this.sexo = sexo;
        this.dt_nasc = dt_nasc;
    }

    public Integer getIdaluno() {
        return idaluno;
    }

    public void setIdaluno(Integer idaluno) {
        this.idaluno = idaluno;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSexo() {
        return sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public LocalDate getDt_nasc() {
        return dt_nasc;
    }

    public void setDt_nasc(LocalDate dt_nasc) {
        this.dt_nasc = dt_nasc;
    }

    @Override
    public String toString() {
        return "Aluno{" +
                "idaluno=" + idaluno +
                ", nome='" + nome + '\'' +
                ", sexo='" + sexo + '\'' +
                ", dt_nasc=" + dt_nasc +
                '}';
    }
}
