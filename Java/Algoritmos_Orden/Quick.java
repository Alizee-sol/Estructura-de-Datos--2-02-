package Algoritmos_Orden;

public class Quick 
{
    public static void QckSort(int[] arreglo, int l, int largo)
    {

    }
    public static void main(String[] args) {
        int[] arreglo = {10, 7, 8, 9, 1, 5};
        int largo = arreglo.length;

        System.out.println("Antes de ordenar los elementos del arreglo: ");
        for (int indice = 0; indice < arreglo.length; indice++) {
            System.out.print(arreglo[indice] + " ");
        }
        
        QckSort(arreglo, 0, largo - 1);
        
        System.out.println("Despues de ordenar los elementos del arreglo: ");
        for (int indice = 0; indice < arreglo.length; indice++) {
            System.out.print(arreglo[indice] + " ");
        }
    }
}
