package Algoritmos_Orden;

public class bubble {
    static void bubbleSort(int[] a) {
        int s = a.length;
        for (int i = 0; i < s; i++) {
            boolean Swapped = false;
            for (int j = 0; j < s - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    Swapped = true;
                }
            }
            if (!Swapped) {
                break;
            }
        }
    }

    public static void main(String[] args) {
        int[] a = {15, 16, 11, 13, 14};
        
        System.out.println("Antes de ordenar los elementos del array son: ");
        for (int j : a) {
            System.out.print(j + " ");
        }
        
        bubbleSort(a);
        
        System.out.println("\nDespués de ordenar los elementos del array son: ");
        for (int j = 0; j < a.length; j++) {
            System.out.print(a[j] + " ");
        }
    }
}