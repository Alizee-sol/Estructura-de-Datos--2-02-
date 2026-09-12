public class Main {

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