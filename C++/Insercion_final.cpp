#include <iostream>
#include <vector>

using namespace std;

int main() {
    //uso vector para poder insertar elementos a un arreglo
    vector<int> insercionfin = {11, 21, 31, 41, 51, 61};
    int ele = 52;
    
    cout << "Antes de la insercion, el array es: ";
    for (int indice = 0; indice < insercionfin.size(); indice++) {
        cout << insercionfin[indice] << " ";
    }
    cout << endl;
    
    //empuja el elemento al ultimo indice del arreglo
    insercionfin.push_back(ele);;
    
    cout << "Después de la insersion en el final del array es: ";
    for (int indice = 0; indice < insercionfin.size(); indice++) {
        cout << insercionfin[indice] << " ";
    }
    cout << endl;
    
    return 0;
}