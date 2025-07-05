package br.com.ifg.entities;

import jakarta.persistence.*;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

@Entity
public class Curso implements Serializable {

    private static final long serialVersionUID = 1L;

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer idcurso;

    @Column(nullable = false, name = "nomecurso")
    private String nomecurso;

    @ManyToMany
    @JoinTable(name = "aluno_curso", joinColumns = @JoinColumn(name = "idcurso"),
            inverseJoinColumns = @JoinColumn(name = "idaluno"))
    private List<Aluno> alunos = new ArrayList<>();


    public Curso() {

    }

    public Curso(Integer idcurso, String nomecurso) {
        this.idcurso = idcurso;
        this.nomecurso = nomecurso;
    }

    public void adicionarAluno(Aluno a) {
        this.alunos.add(a);
    }

    public void removerCurso(Aluno a) {
        this.alunos.remove(a);
        a.removerCurso(this);
    }


    public Integer getIdcurso() {
        return idcurso;
    }

    public void setIdcurso(Integer idcurso) {
        this.idcurso = idcurso;
    }

    public String getNomecurso() {
        return nomecurso;
    }

    public void setNomecurso(String nomecurso) {
        this.nomecurso = nomecurso;
    }

    @Override
    public String toString() {
        return "Curso{" +
                "idcurso=" + idcurso +
                ", nomecurso='" + nomecurso + '\'' +
                '}';
    }
}
