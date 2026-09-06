using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        //uso una lista para poder eliminar elementos del array
        List<int> eliminacionselec = new List<int> { 11, 21, 31, 41, 51, 61 };
        int selec = 3;
        int largo = eliminacionselec.Count; //variable que guarda el largo del arreglo

        //Recorro la lista para mostrar el arreglo
        Console.Write("Antes de la eliminacion del elemento en el indice seleccionado, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(eliminacionselec[indice] + " ");
        }
        Console.WriteLine();

        //Elimina el elemento del indice seleccionado (-1 porque los array empiezan en 0)
        eliminacionselec.RemoveAt(selec -1);
        
        //recorre el arreglo con la eliminacion hecha
        Console.Write("Después de la eliminacion del elemento en el indice seleccionado, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(eliminacionselec[indice] + " ");
        }
        Console.WriteLine();
    } 
}