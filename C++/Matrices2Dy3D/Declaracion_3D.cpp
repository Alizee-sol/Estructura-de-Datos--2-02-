#include <iostream>
#include <vector>

using namespace std;

int main() {

    //Declaracion de array2d (3*3)
    int Array2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Los elementos del array son: ";
    cout << endl;
    
    //auto% detecta en que renglon se encuentra
    for (auto& row : Array2d) {          //Recorre renglones
        for (int element : row) {        //Recorre los elementos de cada renglon
            cout << element << " ";
        }
        cout << endl;
    }
}