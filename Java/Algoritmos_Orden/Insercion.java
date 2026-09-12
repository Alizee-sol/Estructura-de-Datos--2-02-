package Algoritmos_Orden;

public class Insercion {
    public static void main(String[] args) {
        int[] arreglo = {70, 15, 2, 51, 60};

        System.out.println("Antes de ordenar los elementos del arreglo: ");
        printAr(arreglo);
        
        insercionSort(arreglo);
        
        System.out.println("Despues de ordenar los elementos del arreglo: ");
        printAr(arreglo);
    }
}
