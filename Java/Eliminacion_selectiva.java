import java.util.ArrayList;
import java.util.Arrays;

public class Eliminacion_selectiva {
    public static void main(String[] args) 
    {
        //Declaracion de array que pueda ser cambiado (dinamico)
        ArrayList<Integer> eliminacionini = new ArrayList<>(Arrays.asList(11, 21, 31, 41, 51, 61));

        System.out.print("Antes de la eliminacionini al inicio, el array es: ");

        //variable que guarda el largo del array
        int largo = eliminacionini.size();

        //For para recorrer el array (sin eliminar nada)
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(eliminacionini.get(indice) + " ");
        }
        System.out.println();
        
        //Función para eliminar un elemento del indice 0
        eliminacionini.remove(0);
        
        //Recorre el arreglo final, ya con el elemento de menos
        System.out.print("Después de la eliminacion al inicio, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(eliminacionini.get(indice) + " ");
        }
        System.out.println();
    }
}
