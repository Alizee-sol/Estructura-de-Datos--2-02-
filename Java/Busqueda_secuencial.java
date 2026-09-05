public class Busqueda_secuencial {

    static int findEle(int[] arreglo, int largo, int elemento){
        for(int indice =0; indice < largo; indice++){
            if(arreglo[indice] == elemento){
                return indice;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        //Declaracion de arreglo
        int[] arreglo = {12, 34, 10, 6, 40, 89, 98, 57, 19, 69};
        int elemento = 12;
        int largo = arreglo.length; //variable que guarda el largo del arreglo

        //Envío el arreglo(contenido), el largo(cuantos elementos) y el elemento a buscar
        int indice = findEle(arreglo, largo, elemento);

        if(indice != -1)
        {
            System.out.println("El elemento se encuentra en la posicion: " + (indice + 1));
        } 
        else 
        {
            System.out.println("El elemento no está en el conjunto");
        }
    }
}
