import java.util.Arrays;

public class Busqueda_binaria {
    static int findEle(int[] arreglo, int izquierda, int derecha, int elemento) {
        while (izquierda <= derecha) {
            int medio = izquierda + (derecha - izquierda) / 2;
            
            if (arreglo[medio] == elemento) {
                return medio;
            } else if (arreglo[medio] < elemento) {
                izquierda = medio + 1;
            } else {
                derecha = medio - 1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        //Declaracion de arreglo
        int[] arreglo = {12, 34, 10, 6, 40, 89, 98, 57, 19, 69};
        int elemento = 19;
        int largo = arreglo.length; //variable que guarda el largo del arreglo
        Arrays.sort(arreglo);   //orden del arreglo

        //Envío el arreglo(contenido), Rango en el que debe empezar = 0, donde va a terminar y el elemento a buscar
        int indice = findEle(arreglo, 0, largo - 1, elemento);

        if(indice != -1)
        {
            System.out.println("El elemento se encuentra en la posicion: " + (indice));
        } 
        else 
        {
            System.out.println("El elemento no está en el conjunto");
        }
    }
}
