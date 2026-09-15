using System;

class Program
{
    public void seleccion(int[] arreglo, int largo)
    {
        for(int i = 0; i < largo; i++)
        {
            //elemento pequeño
            int small = i;
            for(int j = i + 1; j < largo; j++)
            {
                if (arreglo[small] > arreglo[j])
                {
                    small = j;
                }
            }
            int temp = arreglo[i];        //vacía i 
            arreglo[i] = arreglo[small];  //le da a i el valor de small
            arreglo[small] = temp;        //le da a small el valor de i
        }
    }

    public void printArr(int[] arreglo, int largo)
    {
        for(int i = 0; i < largo; i++)
        {
            Console.WriteLine(arreglo[i] + " ");
        }
    }
    static void main()
    {
        int[] arr = {65, 26, 13, 23, 12};
        int largo = arr.Length;

        Console.WriteLine("Arreglo antes de ser ordenado: \n");
        printArr(arr, largo);

        seleccion(arr, largo);

        Console.WriteLine("Arreglo despues de ser ordenado: \n");
        printArr(arr, largo);
    }   
}