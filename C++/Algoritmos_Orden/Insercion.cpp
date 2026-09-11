#include <iostream>

using namespace std;

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

    cout << "Después de ordenar los elementos del array son: ";
    recorrido(arreglo, largo);

    return 0;
}