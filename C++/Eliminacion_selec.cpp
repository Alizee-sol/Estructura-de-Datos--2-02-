#include <iostream>
#include <vector>

using namespace std;

int main() {
    //uso vector para poder insertar elementos a un arreglo
    vector<int> eliminaciones = {11, 21, 31, 41, 51, 61};
    int largo = eliminaciones.size();
    int idx = 3; //indice del elemento que se va a eliminar

    //recorre el array antes de eliminar nada
    cout << "Antes de la eliminacion, el array es: ";
    for (int indice = 0; indice < largo; indice++) {
        cout << eliminaciones[indice] << " ";
    }
    cout << endl;
    
    //elimino el elemento contando las posiciones desde el inicio del arreglo
    eliminaciones.erase(eliminaciones.begin() + (idx - 1));
    
    cout << "Después de la eliminacion selectiva del array es: ";
    for (int indice = 0; indice < largo; indice++) {
        cout << eliminaciones[indice] << " ";
    }
    cout << endl;
    
    return 0;
}