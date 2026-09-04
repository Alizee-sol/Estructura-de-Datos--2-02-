package Java;

public class Recorrido_secuencial_java {
    public static void main(String[] args) {
         int[] recorrido = {40,50,60,70,80,90};
         System.out.println("Recorrido Secuencial: ");

        for(int elemento : recorrido)
        {
            System.out.println(elemento + " ");
        }
    }
}
