import java.util.ArrayList;
import java.util.Arrays;

public class Insercion_inicio 
{
    public static void main(String[] args) 
    {
        //Declaracion de array que pueda ser cambiado (dinamico)
        ArrayList<Integer> insercion = new ArrayList<>(Arrays.asList(11, 21, 31, 41, 51, 61));
        int ele = 52;

        System.out.print("Antes de la insercion, el array es: ");

        //variable que guarda el largo del array
        int largo = insercion.size();

        //For para recorrer el array (sin insertar nada)
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(insercion.get(indice) + " ");
        }
        System.out.println();
        
    }
}
