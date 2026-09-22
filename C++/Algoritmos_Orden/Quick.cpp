#include <iostream>

using namespace std;

void Particion(int[] a, int l, int h)
{
    int pvt = a[h];
    int j = l - 1;
}

void QckSort(int a[], int l, int h)
{
    if (l < h)
        {
            int pi = Particion(a, l, h);
            QckSort(a, l, pi - 1);
            QckSort(a, pi + 1, h);
        }
}

int main()
{
    int arreglo[] = {10,7,8,9,1,5};
    int largo = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "\nEl arreglo antes de ordenar es: " << endl;
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }

    QckSort(arreglo, 0, largo - 1);

    cout << "\nEl arreglo despues de ordenar es: " << endl;
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }
}