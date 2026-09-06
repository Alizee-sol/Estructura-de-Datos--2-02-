using System;

class Program {
    static int FindEle(int[] arreglo, int largo, int elemento) {
        for (int indice = 0; indice < largo; indice++) {
            if (arreglo[indice] == elemento) {
                return indice;
            }
        }
        return -1;
    }
    static void Main() {
        int[] arreglo = { 12, 34, 10, 6, 40, 89, 98, 57, 19, 69 };
        int elemento = 40;
        int largo = arreglo.Length;
        int indice = FindEle(arreglo, largo, elemento);

        if (indice != -1) {
            Console.WriteLine("El elemento se encuentra en la posicion: " + (indice + 1));
        } else {
            Console.WriteLine("No se encuentra el elemento");
        }
    }
}