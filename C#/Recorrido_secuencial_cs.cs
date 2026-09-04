using System;

class Program
{
    static void Main()
    {
        int[] recorrido = {40,50,60,70,80,90};               //declaracion de array estatico
        Console.WriteLine("El recorrido secuencial es: ");

        foreach (int elemento in recorrido)                  //recorre uno por uno
        {
            Console.Write(elemento + " ");                    //writeline para que no salte de linea
        }
    }
}