import java.util.Scanner;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
public class fibonacciEmVetor {
    public static void main(String[] args) {
        List<BigInteger> fib = new ArrayList<>();
        fib.add(new BigInteger("0"));
        fib.add(new BigInteger("1"));
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            while (fib.size() <= x) {
                fib.add(new BigInteger(fib.get(fib.size() - 1).add(fib.get(fib.size() - 2)).toString()));
            }
            System.out.println("Fib(" + x + ") = " + fib.get(x));
        }
        
        sc.close();
    }
}
