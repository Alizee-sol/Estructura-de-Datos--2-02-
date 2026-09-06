#include <iostream>
#include <vector>

using namespace std;

int main() {
    //uso vector para poder insertar elementos a un arreglo
    vector<int> eliminaciones = {11, 21, 31, 41, 51, 61};
    int largo = eliminaciones.size();

    //recorre el array antes de eliminar nada
    cout << "Antes de la eliminacion, el array es: ";
    for (int indice = 0; indice < largo; indice++) {
        cout << eliminaciones[indice] << " ";
    }
    cout << endl;
    
    //elimino el begin del array
    eliminaciones.erase(eliminaciones.begin());
    
    cout << "Después de la eliminacion del indice 0 es: ";
    for (int indice = 0; indice < largo; indice++) {
        cout << eliminaciones[indice] << " ";
    }
    cout << endl;
    
    return 0;
}