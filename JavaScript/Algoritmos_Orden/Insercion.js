function insercionSort(arreglo) {
    for (let indice = 1; indice < arreglo.length; indice++) 
        {
        let elegido = arreglo[indice];
        let puntero = indice - 1;
        
        //Revisa que el numero sea mayor que el elegido (primero)
        while (puntero >= 0 && elegido < arreglo[puntero]) 
        {
            //El puntero avanza
            arreglo[puntero + 1] = arreglo[puntero];
            puntero = puntero - 1;
        }
        arreglo[puntero + 1] = elegido;
    }
}

function printAr(arreglo) {
    let salida = "";
    for (let indice = 0; indice < arreglo.length; indice++) {
        salida += arreglo[indice] + " ";
    }
    console.log(salida);
}

let arreglo = [70, 15, 2, 51, 60];

console.log("Antes de ordenar los elementos del arreglo: ");
printAr(arreglo);

insercionSort(arreglo);

console.log(""); // Simula el print() vacío de Python
console.log("Despues de ordenar los elementos del arreglo: ");
printAr(arreglo);