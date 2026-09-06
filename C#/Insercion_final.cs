using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        //uso una lista para poder insertar elementos en el array
        List<int> insercion = new List<int> { 11, 21, 31, 41, 51, 61 };
        int ele = 52; 

        int largo = insercion.Count; //variable que guarda el largo del arreglo

        //Recorro la lista para mostrar los elementos
        Console.Write("Antes de la insercion, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(insercion[indice] + " ");
        }
        Console.WriteLine();

        //inserta el elemento en el índice 0
        insercion.Insert(0, ele);
        
        //recorre el arreglo con la insercion hecha
        Console.Write("Después de la eliminacion, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            Console.Write(insercion[indice] + " ");
        }
        Console.WriteLine();
    } 
}