package Algoritmos_Orden;

public class Seleccion {

    static void printArr(int[] a) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] a = {65, 26, 13, 23, 12};

        System.out.println("Arrelo antes de ser ordenado: ");
        printArr(a);
        
        System.out.println("\nArreglo después de ser ordenado: ");
        printArr(a);
    }
}
