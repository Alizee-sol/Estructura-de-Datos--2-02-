#include <iostream>

using namespace std;

void selection(int arreglo[], int largo) 
{
    for (int i = 0; i < largo; i++) 
    {
        //Small = indice del elemento pequeño acomodado
        int small = i;
        //Recorre los elementos a partir del siguiente al Small
        for (int j = i + 1; j < largo; j++) 
        {
            //Si small es mayor al nuevo elemento, este se convierte en small
            if (arreglo[small] > arreglo[j]) 
            {
                small = j;
            }
        }
        //Intercambio 
        int temp = arreglo[i];
        arreglo[i] = arreglo[small];
        arreglo[small] = temp;
    }
}

void printArr(int arreglo[], int largo) {
    for (int i = 0; i < largo; i++) {
        cout << arreglo[i] << " ";
    }
}

int main() {
    int arr[] = {65, 26, 13, 23, 12};
    int lar = sizeof(arr) / sizeof(arr[0]);

    cout << "Arrelo antes de ser ordenado: \n";
    printArr(arr, lar);
    
    selection(arr, lar);
    
    cout << "\nArreglo después de ser ordenado: \n";
    printArr(arr, lar);

    return 0;
}