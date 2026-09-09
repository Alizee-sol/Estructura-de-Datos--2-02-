#include <iostream>
#include <vector>

using namespace std;

int main() {

    int xs = 3, ys = 3;
    //vector con (tamaño)
    vector<int> arr(xs * ys, 0);

    //Declaracion de array2d (3*3)
    int Array2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int k = 0;
        for (int x = 0; x < xs; x++) 
        {
            for (int y = 0; y < ys; y++) 
            {
                k = x * xs + y;
                arr[k] = Array2d[x][y];
                k = k + 1;
            }
        }

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