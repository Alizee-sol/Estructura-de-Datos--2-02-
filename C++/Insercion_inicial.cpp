#include <iostream>
#include <vector>

using namespace std;

int main() {
    //uso vector para poder insertar elementos a un arreglo
    vector<int> insercion = {11, 21, 31, 41, 51, 61};
    int ele = 52;
    
    cout << "Antes de la insercion, el array es: ";
    for (int indice = 0; indice < insercion.size(); indice++) {
        cout << insercion[indice] << " ";
    }
    cout << endl;
    
    //inserta el elemento en el inicio del array (begin = indice 0)
    insercion.insert(insercion.begin(), ele);
    
    cout << "Después de la eliminacion, el array es: ";
    for (int indice = 0; indice < insercion.size(); indice++) {
        cout << insercion[indice] << " ";
    }
    cout << endl;
    
    return 0;
}