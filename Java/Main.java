public class Main {
    public static void main(String[] args) {
        int[] recorridoin = {40, 50, 60, 70, 80, 90};
        System.out.print("Recorrido inverso del array es: ");
        int largo = recorridoin.length;
        
        for (int indice = largo - 1; indice >= 0; indice--) {
            System.out.print(recorridoin[indice] + " ");
        }
        System.out.println();
    }
}