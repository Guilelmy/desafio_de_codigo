import java.util.Scanner;

public class revisaoContrato {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {

            int digitoFalho = sc.nextInt();
            String numeroOriginal = sc.next();

            if (digitoFalho == 0 && numeroOriginal.equals("0")) {
                break;
            }

            String numeroRevisado = numeroOriginal.replace(digitoFalho + "", "");

            numeroRevisado = numeroRevisado.replaceFirst("^0+", "");

            if (numeroRevisado.isEmpty()) {
                System.out.println(0);
            } else {
                System.out.println(numeroRevisado);
            }

        }
        sc.close();

    }
}