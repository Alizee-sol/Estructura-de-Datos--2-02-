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
    
    //elimino el elemento al final del array
    eliminaciones.pop_back();
    
    cout << "Después de la insersion en el final del array es: ";
    for (int indice = 0; indice < largo; indice++) {
        cout << eliminaciones[indice] << " ";
    }
    cout << endl;
    
    return 0;
}