import java.io.FileNotFoundException;
import java.util.Scanner;

public class ClasseSystemInOut {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Digite o nome:");

        String  nome = scan.nextLine();

        System.out.println("Você digitou " + nome);
    }
}
