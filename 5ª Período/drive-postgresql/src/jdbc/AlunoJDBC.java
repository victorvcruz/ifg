package jdbc;

import entities.Aluno;

import java.sql.*;
import java.util.ArrayList;
import java.util.List;

public class AlunoJDBC {

    public Aluno salvar(Aluno aluno) {
        try {
            Connection cnx = db.getConexao();
            PreparedStatement st = cnx.prepareStatement("INSERT INTO aluno (nome, sexo, dt_nasc) VALUES (?, ?, ?) RETURNING id");
            st.setString(1, aluno.getNome());
            st.setString(2, aluno.getSexo());
            st.setDate(3, new java.sql.Date(aluno.getDt_nasc().getTime()));
            ResultSet rs = st.executeQuery();
            if (rs.next()) {
                aluno.setId(rs.getInt(1));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return aluno;
    }

    public List<Aluno> listar() {
        List<Aluno> alunos = new ArrayList<>();
        try {
            Connection cnx = db.getConexao();
            Statement st = cnx.createStatement();
            ResultSet rs = st.executeQuery("SELECT * FROM aluno");
            while (rs.next()) {
                Aluno aluno = new Aluno();
                aluno.setId(rs.getInt("id"));
                aluno.setNome(rs.getString("nome"));
                aluno.setSexo(rs.getString("sexo"));
                aluno.setDt_nasc(rs.getDate("dt_nasc"));
                alunos.add(aluno);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return alunos;
    }

    public void alterar(Aluno aluno) {
        try {
            Connection cnx = db.getConexao();
            PreparedStatement st = cnx.prepareStatement("UPDATE aluno SET nome = ?, sexo = ?, dt_nasc = ? WHERE id = ?");
            st.setString(1, aluno.getNome());
            st.setString(2, aluno.getSexo());
            st.setDate(3, new java.sql.Date(aluno.getDt_nasc().getTime()));
            st.setInt(4, aluno.getId());
            st.execute();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
