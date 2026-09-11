using System;

class Program {
    static void Main() {
        
        int[][] Array2d = new int[][] 
        {
            new int[] { 1, 2, 3 },
            new int[] { 4, 5, 6 },
            new int[] { 7, 8, 9 }
        };

        Console.WriteLine("Los elementos del array son: ");
        foreach (int[] row in Array2d) 
        {
            foreach (int element in row) 
            {
                Console.Write(element + " ");
            }
            Console.WriteLine();
        }
    }
}