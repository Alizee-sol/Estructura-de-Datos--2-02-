public class Main {
    public static void main(String[] args) {
        int[] recorridoin = {40, 50, 60, 70, 80, 90};
        
        System.out.print("Recorrido inverso del array es: ");
        
        // Similar a C#, usamos la propiedad .length (en minúscula)
        for (int i = recorridoin.length - 1; i >= 0; i--) {
            System.out.print(recorridoin[i] + " ");
        }
        System.out.println();
    }
}