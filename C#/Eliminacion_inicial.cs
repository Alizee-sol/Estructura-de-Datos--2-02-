using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        //uso una lista para poder eliminar elementos del array
        List<int> eliminacionini = new List<int> { 11, 21, 31, 41, 51, 61 };
        int ele = 52; 

        int largo = eliminacionini.Count; //variable que guarda el largo del arreglo

        //Recorro la lista para mostrar el arreglo
        Console.Write("Antes de la eliminacion del elemento en el indice 0, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(eliminacionini[indice] + " ");
        }
        Console.WriteLine();

        //Elimina el elemento del indice 0
        eliminacionini.RemoveAt(0);
        
        //recorre el arreglo con la eliminacion hecha
        Console.Write("Después de la eliminacion del elemento en el indice 0, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(eliminacionini[indice] + " ");
        }
        Console.WriteLine();
    } 
}