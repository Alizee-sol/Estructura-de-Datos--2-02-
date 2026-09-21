using System;

class program
{
    static void main()
    {

        static int Partition(int[] a, int l, int h) 
        {
        
        }
        static void QckSort(int[] a, int l, int h) 
        {
            if (l < h) {
                int pi = Partition(a, l, h);
                QckSort(a, l, pi - 1);
                QckSort(a, pi + 1, h);
            }
        }

        int[] arreglo = { 10, 7, 8, 9, 1, 5 };
        int largo = arreglo.Length;
        
        Console.WriteLine("El arreglo antes de ordenarlo: ");
        foreach (int i in largo) {
            Console.Write(i + " ");
        }
        Console.WriteLine();
        
        QckSort(a, 0, size - 1);

        Console.WriteLine("El arreglo después de ordenarlo: ");
        foreach (int i in largo) {
            Console.Write(i + " ");
        }
        Console.WriteLine();
    }   
}