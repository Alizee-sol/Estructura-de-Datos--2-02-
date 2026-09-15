#include <iostream>

using namespace std;

void selection(int arreglo[], int largo) 
{
    for (int i = 0; i < largo; i++) 
    {
        //Small = elemento pequeño
        int small = i;
        //Recorre los elementos a partir del siguiente al Small
        for (int j = i + 1; j < largo; j++) 
        {
            //Recorre uno por uno boscando el menor
            if (arreglo[small] > arreglo[j]) 
            {
                //Guarda el menor
                small = j;
            }
        }
        //Intercambio 
        int temp = arreglo[i];        //vacía i 
        arreglo[i] = arreglo[small];  //le da a i el valor de small
        arreglo[small] = temp;        //le da a small el valor de i
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

    cout << "Arreglo antes de ser ordenado: \n";
    printArr(arr, lar);
    
    selection(arr, lar);
    
    cout << "\nArreglo después de ser ordenado: \n";
    printArr(arr, lar);

    return 0;
}