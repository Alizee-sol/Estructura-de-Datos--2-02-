#include <iostream>

using namespace std;

int findEle(int arreglo[], int izquierda, int derecha, int elemento) {
    while (izquierda <= derecha) {
        //me aseguro de que sean enteros y busco el medio
        int medio = izquierda + (derecha - izquierda) / 2;
        
        if (arreglo[medio] == elemento) {
            return medio;
        } else if (arreglo[medio] < elemento) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1;
}

int main() {
    int arreglo[] = {12, 34, 10, 6, 40, 89, 98, 57, 19, 69};
    int elemento = 19;
    // Calculamos el tamaño del arreglo
    int s = sizeof(arreglo) / sizeof(arreglo[0]);
    
    int indice = findEle(arreglo, 0, s - 1, elemento);
    
    if (indice != -1) {
        cout << "El elemento se encuentra en la posicion: " << indice << endl;
    } else {
        cout << "No se encuentra el elemento" << endl;
    }
    
    return 0;
}