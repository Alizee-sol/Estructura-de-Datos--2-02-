#include <iostream>
using namespace std;

//Declaracion global del array tablero (8*8 lugares) tipo char
char tablero[8][8];

void iniciaTablero()
{
    //Recorrido de filas
    for (int filas = 0; filas < 8; filas++)
    {
        //Recorrido de columas (elementos)
        for (int ele = 0; ele < 8; ele++)
        {
            //Fichas Negras en las primeras 3 filas
            //Verifica que la casilla sea par
            if (filas < 3 && (filas + ele) % 2 != 0)
            {
                tablero[filas][ele] = 'X';
            }
            //Fichas Blancas en las últimas 3 filas
            //Verifica que la casilla sea par
            else if (filas > 4 && (filas + ele) % 2 != 0)
            {
                tablero[filas][ele] = 'o';
            }
            //Espacios vacíos (el resto)
            else 
            {
                tablero[filas][ele] = ' ';
            }
        }
    }
}
void mostrarTablero() 
{  
    //Recorrido de filas para mostrar número en Y
    for (int num = 0; num < 8; num++) 
    {
        cout << num << " "; 
        //Contenido del tablero con espacios
        for (int celda = 0; celda < 8; celda++) 
        {
            cout << " " << tablero[num][celda] << " ";
        }
        cout << endl;
    }
    //Letras para identificar celdas en X
    cout << "   A  B  C  D  E  F  G  H";
}

void turno()
{

}

void ganador()
{

}


int main()
{
    int opc = 0;
    while(opc != 2)
    {
        cout << "\n+---+---+---+ JUEGO DE LAS DAMAS +---+---+---+" << endl;
        cout << "1. Comenzar" << endl;
        cout << "2. Salir" << endl;
        cin >> opc;
        if (opc == 1)
        {
            cout << "\n El juego ha iniciado" << endl;
            iniciaTablero();
            mostrarTablero();
            turno();
            ganador(); 
            opc = 0;
        }
        else
        {
            cout << "Opción desconocida."; 
            opc = 0;
        }
    } 
    cout << "\n Saliendo del juego...";

    return 0;
}