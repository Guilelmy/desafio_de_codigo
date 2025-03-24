public class sequenciaSII {
    public static void main(String[] args) {
        float numerador = 1;
        float denominador = 1;
        float soma = 0;
        while(numerador<=39){
            soma += numerador/denominador;
            numerador += 2;
            denominador *= 2;
        }
        System.out.println(String.format("%.2f", soma));

    }
}