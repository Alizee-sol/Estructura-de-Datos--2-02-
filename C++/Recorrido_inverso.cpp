#include <iostream>
using namespace std;

int main() 
{
    int recorridoin[] = {40, 50, 60, 70, 80, 90};  
    int largo = sizeof(recorridoin) / sizeof(recorridoin[0]);  //bytes_elemento/bytes_totales
    cout << "Recorrido inverso es: ";
    
    for (int indice = largo - 1; indice >= 0; indice--) 
    {
        cout << recorridoin[indice] + " ";
    }
    cout << endl;
    
    return 0;
}