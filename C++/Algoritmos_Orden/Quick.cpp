#include <iostream>

using namespace std;

int main()
{
    int arreglo[] = {10,7,8,9,1,5};
    int largo = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "\nEl arreglo antes de ordenar es: " << endl;
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }

    cout << "\nEl arreglo despues de ordenar es: " << endl;
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }
}