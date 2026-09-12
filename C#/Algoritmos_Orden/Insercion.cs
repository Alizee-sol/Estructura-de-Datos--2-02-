using System;

class Program {
    static void InsercionSort(int[] arreglo) {
        for (int indice = 1; indice < arreglo.Length; indice++) {
            int elegido = arreglo[indice];
            int puntero = indice - 1;
            
            while (puntero >= 0 && elegido < arreglo[puntero]) {
                arreglo[puntero + 1] = arreglo[puntero];
                puntero = puntero - 1;
            }
            arreglo[puntero + 1] = elegido;
        }
    }

    static void PrintAr(int[] arreglo) {
        for (int indice = 0; indice < arreglo.Length; indice++) {
            Console.Write(arreglo[indice] + " ");
        }
    }

    static void Main() {
        int[] arreglo = { 70, 15, 2, 51, 60 };

        Console.WriteLine("Antes de ordenar los elementos del arreglo: ");
        PrintAr(arreglo);
        
        InsercionSort(arreglo);
        
        Console.WriteLine("\n");
        Console.WriteLine("Despues de ordenar los elementos del arreglo: ");
        PrintAr(arreglo);
    }
}