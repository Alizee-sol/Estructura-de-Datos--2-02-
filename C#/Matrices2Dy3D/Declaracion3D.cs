using System;

class Program {
    static void Main() {
        
        int[][][] Array3d = new int[][][] 
        {
        new int[][] {
            new int[] { 1, 2, 3 },
            new int[] { 4, 5, 6 },
            new int[] { 7, 8, 9 }
        },
        new int[][] 
        {
            new int[] { 11, 12, 13 },
            new int[] { 14, 15, 16 },
            new int[] { 17, 18, 19 }
        }};

        Console.WriteLine("Los elementos del array son: ");
        foreach (int[][] Array2d in Array3d) 
        {
            foreach (int[] row in Array2d) 
            {
                Console.WriteLine(); 
                foreach (int element in row) 
                {
                    Console.Write(element + " ");
                }
            }
            Console.WriteLine();
        }
    }
}