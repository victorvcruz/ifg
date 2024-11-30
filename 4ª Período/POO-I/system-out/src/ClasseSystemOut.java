import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintStream;

public class ClasseSystemOut {

    public static void main(String[] args) throws FileNotFoundException {
        File arquivo = new File("teste.txt");
        FileOutputStream strDdados = new FileOutputStream(arquivo);
        PrintStream escreveNoArquivo = new PrintStream(strDdados);
        System.setOut(escreveNoArquivo);

        System.out.println("FEIJÃO");

    }

}