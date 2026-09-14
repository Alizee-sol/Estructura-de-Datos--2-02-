#include <iostream>
using namespace std;

//Declaracion global del array tablero (8*8 lugares) tipo char
char tablero[8][8];
char blanco = 'o';
char negro = 'x';
char libre = ' ';
//Contadores de captura
int Captura_blanca, Captura_negra;


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
                tablero[filas][ele] = negro;
            }
            //Fichas Blancas en las últimas 3 filas
            //Verifica que la casilla sea par
            else if (filas > 4 && (filas + ele) % 2 != 0)
            {
                tablero[filas][ele] = blanco;
            }
            //Espacios vacíos (el resto)
            else 
            {
                tablero[filas][ele] = libre;
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
    cout << "   0  1  2  3  4  5  6  7";
}

void turno()
{
    bool win = false;
    //Jugador actual (comienza el blanco = o)
    char jugador = blanco;
    //x, y = Origen // xs, ys = destino
    int x = 0, y = 0, xs = 0, ys = 0;
    while (win = false)
    {
        cout << "\n Ingrese posicion de la ficha que va a mover" << endl;
        cin >> x >> y;

        if (tablero[x][y] != jugador)
        {
            cout << "\n la ficha que elegiste no es tuya" << endl;
        }
        cout << "Ingrese posicion de donde la moverá" << endl;
        cin >> xs >> ys;
        if (tablero[xs][ys] == jugador)
        {
            cout << "\n la posicion que elegiste ya tiene una ficha tuya" << endl;
        }
        else if (tablero[xs][ys] == libre)
        {
            //Inserta la ficha en el lugar libre
            tablero[xs][xs] = jugador;
            //Elimina el valor de la celda original
            tablero[x][y] = libre;
            //Actualiza tablero
            mostrarTablero();
        }
        else if (tablero[xs][ys] == negro)
        {
            //Elimina la ficha del jugador contrario
            tablero[xs][ys] = blanco; 
            //Agregamos la anotacion al jugador que comió dicha ficha
            if (jugador == blanco) 
            {
                Captura_blanca++;
            } 
            else 
            {
                Captura_negra++;
            }
            mostrarTablero();

        }
        //Cambio de turno
        if (jugador == blanco) 
        {
            jugador = negro;
        } 
        else 
        {
            jugador = blanco;
        }

    }
    
}

void evaluarGanador()
{
    //Bool para saber si hay un ganador
    bool ganador_blanco = false;
    bool ganador_negro = false;
    //Comprueva cuantas capturas tiene cada uno
    if(Captura_blanca == 12)
    {
        ganador_blanco = true;
    }
    else if(Captura_negra == 12)
    {
        ganador_negro = true;
    }
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
            evaluarGanador(); 
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