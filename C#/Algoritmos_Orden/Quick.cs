using System;

class program
{
    static void main()
    {
        int[] arreglo = { 10, 7, 8, 9, 1, 5 };
        int largo = arreglo.Length;
        
        Console.WriteLine("El arreglo antes de ordenarlo: ");
        foreach (int i in largo) {
            Console.Write(i + " ");
        }
        Console.WriteLine();
        
        Console.WriteLine("El arreglo después de ordenarlo: ");
        foreach (int i in largo) {
            Console.Write(i + " ");
        }
        Console.WriteLine();
    }   
}