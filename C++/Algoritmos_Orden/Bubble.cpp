#include <iostream>

using namespace std;

void bubblesort(int arreglo[], int largo)
{
    for (int indice = 0; indice < largo; indice)
    {
        bool Swap = false;

        for(int j = 0; j < largo - indice - 1; j++) //Los ultimos indices estarán acomodados
        {
            if (arreglo[j] > arreglo[j +1])         //Pregunta si el indice actual es mayor que el siguiente
            {
                int elegido = arreglo[j];
                arreglo[j] = arreglo[j +1];
                arreglo[j +1] = elegido;
                Swap = true;
            }
        }
        if (!Swap)
        {
            break;
        }
    }
}

int main()
{
    int arreglo[] = {15,16,11,13,14};
    int largo = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Antes de ordenar los elementos del array son: ";
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }

    bubblesort(arreglo, largo);

    cout << "Después de ordenar los elementos del array son: ";
    for (int indice = 0; indice < largo; indice++) {
        cout << arreglo[indice] << " ";
    }
    return 0;
}