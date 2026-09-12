using System;

class Program {
    static void BubbleSort(int[] a) 
    {
        int s = a.Length;
        for (int i = 0; i < s; i++) 
        {
            bool Swapped = false;
            for (int j = 0; j < s - i - 1; j++) 
            {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    Swapped = true;
                }
            }
            if (!Swapped) 
            {
                break;
            }
        }
    }

    static void Main() 
    {
        int[] a = { 15, 16, 11, 13, 14 };
        
        Console.WriteLine("Antes de ordenar los elementos del array son: ");
        foreach (int j in a) 
        {
            Console.Write(j + " ");
        }
        
        BubbleSort(a);
        
        Console.WriteLine("Después de ordenar los elementos del array son: ");
        for (int j = 0; j < a.Length; j++) 
        {
            Console.Write(a[j] + " ");
        }
    }
}