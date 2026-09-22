#include <iostream>

using namespace std;

void swap(int a[], int j, int k) 
    {
        int temp = a[j];
        a[j] = a[k];
        a[k] = temp;
    }

int partition(int a[], int l, int h) {
    int pvt = a[h];
    int j = l - 1;
    for (int k = l; k < h; k++) {
        if (a[k] < pvt) {
            j++;
            swap(a, j, k);
        }
    }
    swap(a, j + 1, h);
    return j + 1;
}

void qckSort(int a[], int l, int h) 
{
    if (l < h) {
        int pi = partition(a, l, h);
        qckSort(a, l, pi - 1);
        qckSort(a, pi + 1, h);
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

    qckSort(arreglo, 0, largo - 1);

    cout << "\nEl arreglo despues de ordenar es: " << endl;
    for (int indice = 0; indice < largo; indice++)
    {
        cout << arreglo[indice] << " ";
    }
}