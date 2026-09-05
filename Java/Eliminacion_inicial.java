import java.util.ArrayList;
import java.util.Arrays;

public class Eliminacion_inicial {
   public static void main(String[] args) 
    {
        //Declaracion de array que pueda ser cambiado (dinamico)
        ArrayList<Integer> eliminacion = new ArrayList<>(Arrays.asList(11, 21, 31, 41, 51, 61));

        System.out.print("Antes de la eliminacion al final, el array es: ");

        //variable que guarda el largo del array
        //para saber cual es el último
        int largo = eliminacion.size();

        //For para recorrer el array (sin eliminar nada)
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(eliminacion.get(indice) + " ");
        }
        System.out.println();
        
        //Función para eleminar un elemento ubicado al ultimo del array
        eliminacion.remove(largo - 1);
        
        //Recorre el arreglo final, ya con el elemento de menos
        System.out.print("Después de la eliminacion, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(eliminacion.get(indice) + " ");
        }
        System.out.println();
    } 
}
