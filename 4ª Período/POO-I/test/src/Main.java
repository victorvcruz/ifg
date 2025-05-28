public class Main {
    public static void main(String[] args) {
        int x[] = new int[5];
        int c = 0;
        int y[] = {15, 10, 42, 13, 72};

        for (int i : y) {
            if (i % 2 == 0)
                x[i + c] = i;
        }

        System.out.println(x[1] + x[3]);
    }
}