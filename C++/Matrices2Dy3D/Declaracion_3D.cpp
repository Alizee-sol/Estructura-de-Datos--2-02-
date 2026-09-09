#include <iostream>
#include <vector>

using namespace std;

int main() {

    //Declaracion de array3d (2)pisos de (3)x y (3)y
    int Array3d[2][3][3] = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }, {
        {11, 12, 13},
        {14, 15, 16},
        {17, 18, 19}
    }};

    cout << "Los elementos del array son: ";
    cout << endl;
    
    for (auto& Array2d : Array3d) {
        for (auto& row : Array2d) {          //Recorre renglones
            for (int element : row) {        //Recorre los elementos de cada renglon
                cout << element << " ";
            }
            cout << endl;
        }
    }
}