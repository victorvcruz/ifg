package jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class db {

    private static Connection conexao;

    public static Connection getConexao() throws SQLException {

        if (conexao == null) {
                conexao = DriverManager.getConnection("jdbc:postgresql://localhost:5432/postgres",
                        "postgres",
                        "postgres");
        }
        return conexao;
    }

    public static void fechaConexao() {
        if ( conexao != null) {
            try {
                conexao.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }

}