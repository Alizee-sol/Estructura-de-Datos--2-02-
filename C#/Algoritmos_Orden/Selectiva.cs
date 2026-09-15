using System;

class Program
{
    static void main()
    {
        int[] arr = {65, 26, 13, 23, 12};
        int largo = arr.Length;

        Console.WriteLine("Arreglo antes de ser ordenado: \n");
        printArr(arr, largo);

        seleccion(arr, largo);

        Console.WriteLine("Arreglo despues de ser ordenado: \n");
        printArr(arr, largo);
    }   
}