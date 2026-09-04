using System;
class Program {
    static void Main() 
    {
        int[] recorridoin = { 40, 50, 60, 70, 80, 90 };
        Console.Write("Recorrido inverso del array es: ");
        int largo = recorridoin.Length - 1;
        
        for(int indice = largo; indice >= 0; indice--) 
        {
            Console.Write(recorridoin[indice] + " ");
        }
    }
}