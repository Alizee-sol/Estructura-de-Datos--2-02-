#include <iostream>

using namespace std;

void insercion(int arreglo[], int largo)
{
    for (int indice = 1; indice < largo; indice++)         //Recorre arreglo
    {
        int elegido = arreglo[indice];                     //Asigna al indice actual como elegido
        int puntero = indice - 1;                          //Asigna puntero al siguiente
        
        while (puntero >= 0 && elegido < arreglo[puntero]) //revisa que el numero actual sea mas grande que el elegido
        {
            arreglo[puntero + 1] = arreglo[puntero];
            puntero = puntero - 1;                         //Compara el siguiente
        }
        arreglo[puntero + 1] = elegido;                    //Encontró uno mas pequeño y es el nuevo temporal
    }
}

void recorrido(int arreglo[], int largo)
{
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }
}

int main()
{
    int arreglo[] = {15,16,11,13,14};
    int largo = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Antes de ordenar los elementos del array son: ";
    recorrido(arreglo, largo);

    insercion(arreglo, largo);

    cout << "Después de ordenar los elementos del array son: ";
    recorrido(arreglo, largo);

    return 0;
}