package Algoritmos_Orden;

public class Quick 
{
    static void swap(int[] arreglo, int j, int largo) 
    {
        int temp = arreglo[j];
        arreglo[j] = arreglo[largo];
        arreglo[largo] = temp;
    }
    static int particion(int[] arreglo, int l, int largo) 
    {
        int pvt = arreglo[largo];
        int j = l - 1;
        for (int k = l; k < largo; k++) {
            if (arreglo[k] < pvt) {
                j++;
                swap(arreglo, j, k);
            }
        }
        swap(arreglo, j + 1, largo);
        return j + 1;
    }
    static void QckSort(int[] arreglo, int l, int largo)
    {
        if (l < largo)
        {
            int pi = particion(arreglo, l, largo);
            QckSort(arreglo, l, pi - 1);
            QckSort(arreglo, pi + 1, largo);
        }
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
