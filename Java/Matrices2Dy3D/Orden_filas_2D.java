package Matrices2Dy3D;

public class Orden_filas_2D {
    public static void main(String[] args) 
    {
        
        //Declaracion del tamaño de X y Y
        int xs = 3, ys = 3;
        
        //Declaracion del arreglo vacío donde se van a acomodar los elementos del arreglo 2d
        int[] arr = new int[xs * ys];

        int[][] Array2d = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        System.out.println("Los elementos del array 2D son: ");
        for (int[] row : Array2d)               //Recorre renglones
        {
            for (int element : row)             //Recorre los elementos de cada renglon
                {
                System.out.print(element + " ");
            }
            System.out.println();
        }

        int k = 0;
        for (int x = 0; x < xs; x++) 
        {
            for (int y = 0; y < ys; y++) 
            {
                k = x * xs + y;
                arr[k] = Array2d[x][y];
                k = k + 1;
            }
        }

        System.out.println("Los elementos del array 3D son: ");
        for (int x = 0; x < xs; x++) {
            for (int y = 0; y < ys; y++) {
                System.out.print(arr[x * xs + y] + " ");
            }
        }
    }
}
