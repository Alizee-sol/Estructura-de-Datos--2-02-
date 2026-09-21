using System;

class program
{
    static void Swap(int[] a, int j, int k) 
    {
        int temp = a[j];
        a[j] = a[k];
        a[k] = temp;
    }

    static int Particion(int[] a, int l, int h) 
    {            
        int pvt = a[h];
        int j = l - 1;
        for (int k = l; k < h; k++)
        {
            if (a[k] < pvt) 
            {
                j++;
                Swap(a, j, k);
            }
        }
        Swap(a, j + 1, h);
        return j + 1;        
    }
        
    static void QckSort(int[] a, int l, int h) 
    {
        if (l < h)
        {
            int pi = Particion(a, l, h);
            QckSort(a, l, pi - 1);
            QckSort(a, pi + 1, h);
        }
    }
    static void Main()
    {

        int[] arreglo = { 10, 7, 8, 9, 1, 5 };
        int largo = arreglo.Length;
        
        Console.WriteLine("El arreglo antes de ordenarlo: ");
        foreach (int i in arreglo) {
            Console.Write(i + " ");
        }
        Console.WriteLine();
        
        QckSort(arreglo, 0, largo - 1);

        Console.WriteLine("El arreglo después de ordenarlo: ");
        foreach (int i in arreglo) {
            Console.Write(i + " ");
        }
        Console.WriteLine();
    }   
}