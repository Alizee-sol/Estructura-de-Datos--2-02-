#include <iostream>

using namespace std;

int main() {
    int arreglo[] = {12, 34, 10, 6, 40, 89, 98, 57, 19, 69};
    int elemento = 19;
    // Calculamos el tamaño del arreglo
    int s = sizeof(arreglo) / sizeof(arreglo[0]);
    
    int indice;
    
    if (indice != -1) {
        cout << "El elemento se encuentra en la posicion: " << (indice + 1) << endl;
    } else {
        cout << "No se encuentra el elemento" << endl;
    }
    
    return 0;
}