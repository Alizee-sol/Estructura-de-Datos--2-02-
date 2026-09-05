import java.util.ArrayList;
import java.util.Arrays;

public class Eliminacion_final {
    public static void main(String[] args) 
    {
        //Declaracion de array que pueda ser cambiado (dinamico)
        ArrayList<Integer> insercionfin = new ArrayList<>(Arrays.asList(11, 21, 31, 41, 51, 61));
        int elemento = 52;

        System.out.print("Antes de la insercion al final, el array es: ");

        //variable que guarda el largo del array
        int largo = insercionfin.size();

        //For para recorrer el array (sin insertar nada)
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(insercionfin.get(indice) + " ");
        }
        System.out.println();
        
        //Función para agregar un elemento
        //Sin especificar el indice, asume que es al final del array
        insercionfin.add(elemento);
        
        //Recorre el arreglo final, ya con el elemento nuevo
        System.out.print("Después de la insercion, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(insercionfin.get(indice) + " ");
        }
        System.out.println();
    }
}
