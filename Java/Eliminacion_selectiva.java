import java.util.ArrayList;
import java.util.Arrays;

public class Eliminacion_selectiva {
    public static void main(String[] args) 
    {
        //Declaracion de array que pueda ser cambiado (dinamico)
        ArrayList<Integer> eliminacionselec = new ArrayList<>(Arrays.asList(11, 21, 31, 41, 51, 61));

        System.out.print("Antes de la eliminacion selectiva al inicio, el array es: ");

        //variable que guarda el largo del array
        int largo = eliminacionselec.size();

        //For para recorrer el array (sin eliminar nada)
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(eliminacionselec.get(indice) + " ");
        }
        System.out.println();

        //indice que vamos a eliminar
        int idx = 3;
        
        //Función para eliminar un elemento del indice idx
        eliminacionselec.remove(idx - 1);
        
        //Recorre el arreglo final, ya con el elemento de menos
        System.out.print("Después de la eliminacion selectiva, el array es: ");
        for (int indice = 0; indice < largo; indice++) {
            System.out.print(eliminacionselec.get(indice) + " ");
        }
        System.out.println();
    }
}
