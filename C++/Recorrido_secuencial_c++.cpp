#include <iostream>
using namespace std;

int main() 
{
    int recorrido[] = {40, 50, 60, 70, 80, 90};             //Arreglo estatico
    
    cout << "Recorrido lineal (secuencial) es: ";
    
    for (int elemento : recorrido) {                        //muestra 1 po 1
        cout << elemento << " ";
    }
    cout << endl;
    
    return 0;
}