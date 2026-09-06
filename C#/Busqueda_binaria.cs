using System;

class Program {
    static int FindEle(int[] arreglo, int izquierda, int derecha, int elemento) {
        while (izquierda <= derecha) {
            int medio = izquierda + (derecha - izquierda) / 2;
            
            if (arreglo[medio] == elemento) {
                return medio;
            } else if (arreglo[medio] < elemento) {
                izquierda = medio + 1;
            } else {
                derecha = medio - 1;
            }
        }
        return -1;
    }
    static void Main() {
        int[] arreglo = { 12, 34, 10, 6, 40, 89, 98, 57, 19, 69 };
        int elemento = 40;
        int largo = arreglo.Length;

        Array.Sort(arreglo);

        int indice = FindEle(arreglo, 0, largo - 1, elemento);
        
        if (indice != -1) {
            Console.WriteLine("El elemento se encuentra en la posicion: " + indice);
        } else {
            Console.WriteLine("No se encuentra el elemento");
        }
    }
}