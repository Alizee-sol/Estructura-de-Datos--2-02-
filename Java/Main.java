public class Main {
    public static void main(String[] args) {
        //Declaración del array estático
        int[] recorridoin = {40, 50, 60, 70, 80, 90};

        System.out.print("Recorrido inverso del array es: ");
        
        //Variable que guarda el largo del array para saber cuantos elementos hay
        int largo = recorridoin.length;                       
        
        //"For" para bajar el indice desde el último elemento del array
        for (int indice = largo - 1; indice >= 0; indice--) {
            System.out.print(recorridoin[indice] + " ");
        }
        System.out.println();
    }
}