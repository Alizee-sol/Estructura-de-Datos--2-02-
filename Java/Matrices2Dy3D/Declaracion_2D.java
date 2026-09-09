package Matrices2Dy3D;

class Declaracion_2D {

    public static void main(String[] args) {
        int[][] Array2d = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        System.out.println("Los elementos del array son: ");
        
        for (int[] row : Array2d)               //Recorre renglones
            {
            for (int element : row)             //Recorre los elementos de cada renglon
                {
                System.out.print(element + " ");
            }
            System.out.println();
        }
    }
}