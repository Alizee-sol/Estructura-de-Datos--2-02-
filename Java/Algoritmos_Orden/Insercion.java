package Algoritmos_Orden;

public class Insercion {

    static void insercionSort(int[] arreglo) {
        for (int indice = 1; indice < arreglo.length; indice++) {
            int elegido = arreglo[indice];
            int puntero = indice - 1;
            
            while (puntero >= 0 && elegido < arreglo[puntero]) {
                arreglo[puntero + 1] = arreglo[puntero];
                puntero = puntero - 1;
            }
            arreglo[puntero + 1] = elegido;
        }
    }

    static void printAr(int[] arreglo) {
        for (int indice = 0; indice < arreglo.length; indice++) {
            System.out.print(arreglo[indice] + " ");
        }
    }
    public static void main(String[] args) {
        int[] arreglo = {70, 15, 2, 51, 60};

        System.out.println("Antes de ordenar los elementos del arreglo: ");
        printAr(arreglo);
        
        insercionSort(arreglo);
        
        System.out.println("Despues de ordenar los elementos del arreglo: ");
        printAr(arreglo);
    }
}
