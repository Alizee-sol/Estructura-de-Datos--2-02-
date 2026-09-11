using System;
using System.Runtime.CompilerServices;

class Program
{
    static void Main()
    {
        
        int[][] Array2d = new int[][] 
        {
            new int[] {1, 2, 3},
            new int[] {4, 5, 6},
            new int[] {7, 8, 9}
        };

        Console.WriteLine("Los elementos de array son: ");
        foreach(int[] row in array2d)
        {
            foreach(int elemento in row)
            {
                Console.Write(elemento + " ");
            }
            Console.WriteLine();
        }    
    }


}