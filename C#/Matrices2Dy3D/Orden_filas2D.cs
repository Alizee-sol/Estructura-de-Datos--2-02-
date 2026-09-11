using System;

class Program {
    static void Main() {

        int xs = 3, ys = 3;
        int[] arr = new int[xs * ys];
        
        int[][] Array2d = new int[][] 
        {
            new int[] { 1, 2, 3 },
            new int[] { 4, 5, 6 },
            new int[] { 7, 8, 9 }
        };

        //Formula para vaciar array2d en fila 1d
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

        Console.WriteLine("Los elementos del array son: ");
        foreach (int[] row in Array2d) 
        {
            foreach (int element in row) 
            {
                Console.Write(element + " ");
            }
            Console.WriteLine();
        }

        //Recorrido con resultado
        Console.WriteLine("Los elementos del array unidimensional son: ");
        for (int x = 0; x < xs; x++) 
        {
            for (int y = 0; y < ys; y++) 
            {
                Console.Write(arr[x * xs + y] + " ");
            }
        }
        Console.WriteLine();
    }
}