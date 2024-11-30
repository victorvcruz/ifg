import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.util.Scanner;


public class ClasseSystemUmArquivo {

    public static void main(String[] args) throws FileNotFoundException {

        File arquivo = new File("teste.txt");
        Scanner dados = new Scanner(arquivo);
        while(dados.hasNext()) {
            System.out.println(dados.nextLine());
        }
        dados.close();
    }
}
