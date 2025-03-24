import java.util.Scanner;

public class somaFatoriais {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int M = scanner.nextInt();
            int N = scanner.nextInt();

            System.out.println(fatorial(M) + fatorial(N));

        }
        scanner.close();
    }

    public static long fatorial(int n) {
        long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}