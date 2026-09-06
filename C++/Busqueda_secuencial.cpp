#include <iostream>

using namespace std;

//funcion de busqueda
int findEle(int arreglo[], int s, int elemento) {
    for (int indice = 0; indice < s; indice++) {
        if (arreglo[indice] == elemento) {
            return indice;
        }
    }
    return -1;
}

int main() {
    int arreglo[] = {12, 34, 10, 6, 40, 89, 98, 57, 19, 69};
    int elemento = 19;
    // Calculamos el tamaño del arreglo
    int s = sizeof(arreglo) / sizeof(arreglo[0]);
    
    //Mando el arreglo, el largo (s) y el elemento por buscar a la funcion  
    int indice = findEle(arreglo, s, elemento);
    
    if (indice != -1) {
        cout << "El elemento se encuentra en la posicion: " << (indice + 1) << endl;
    } else {
        cout << "No se encuentra el elemento" << endl;
    }
    
    return 0;
}