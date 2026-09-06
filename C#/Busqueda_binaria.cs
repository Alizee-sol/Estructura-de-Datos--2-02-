using System;

class Program {
    static void Main() {
        int[] arreglo = { 12, 34, 10, 6, 40, 89, 98, 57, 19, 69 };
        int elemento = 40;
        int largo = arreglo.Length;
        int indice;
        
        if (indice != -1) {
            Console.WriteLine("El elemento se encuentra en la posicion: " + indice);
        } else {
            Console.WriteLine("No se encuentra el elemento");
        }
    }
}