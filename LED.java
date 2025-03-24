import java.util.Scanner;
public class LED {
    public static void main(String[] args) {
        int[] leds = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < n; i++) {
            String valor = sc.nextLine();
            int totalLeds = 0;
            
            for (char c : valor.toCharArray()) {
                totalLeds += leds[c - '0'];
            }
            
            System.out.println(totalLeds + " leds");
        }

       sc.close();
    }
    
}
