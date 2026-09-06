using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        //uso una lista para poder eliminar elementos del array
        List<int> eliminacion = new List<int> { 11, 21, 31, 41, 51, 61 };
        int ele = 52; 

        int largo = eliminacion.Count; //variable que guarda el largo del arreglo

        //Recorro la lista para mostrar el arreglo
        Console.Write("Antes de la eliminacion, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(eliminacion[indice] + " ");
        }
        Console.WriteLine();

        //Elimina el elemento del indice penúltimo
        eliminacion.RemoveAt(largo - 1);
        
        //recorre el arreglo con la eliminacion hecha
        Console.Write("Después de la eliminacion, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(eliminacion[indice] + " ");
        }
        Console.WriteLine();
    } 
}