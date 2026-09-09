package Matrices2Dy3D;

public class Declaracion_3D {
    public static void main(String[] args) {
        int[][][] Array3d = {
            {
                {1, 2, 3}, 
                {4, 5, 6}, 
                {7, 8, 9}
            },
            {
                {10, 11, 12}, 
                {13, 14, 15}, 
                {16, 17, 18}
            }
        };

        System.out.println("Los elementos del array son: ");
        for (int[][] Array2d : Array3d)                  //Declara array2D + Recorre bloques
        {
            for (int[] row : Array2d)                    //Declara array1D + Recorre columnas
            {
                System.out.println(); 
                for (int element : row)                  //Recorre elementos de filas
                {
                    System.out.print(element + " ");
                }
            }
            System.out.println(); 
        }
    }
}
