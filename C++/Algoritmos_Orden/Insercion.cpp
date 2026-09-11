#include <iostream>

using namespace std;

int main()
{
    int arreglo[] = {15,16,11,13,14};
    int largo = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Antes de ordenar los elementos del array son: ";
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }

    cout << "Después de ordenar los elementos del array son: ";
    for (int indice = 0; indice < largo; indice++) {
        cout << arreglo[indice] << " ";
    }
    return 0;
}