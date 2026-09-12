function bubbleSort(arreglo) {
    let largo = arreglo.length;
    for (let indice = 0; indice < largo; indice++) 
    {
        let Swapped = false;
        for (let j = 0; j < largo - indice - 1; j++) 
        {
            if (arreglo[j] > arreglo[j + 1]) 
            {
                // Intercambio variables directamente
                [arreglo[j], arreglo[j + 1]] = [arreglo[j + 1], arreglo[j]];
                Swapped = true;
            }
        }
        if (Swapped === false) 
            {
            break;
        }
    }
}

let arreglo = [15, 16, 11, 13, 14];

console.log("Antes de ordenar los elementos del array son: ");
for (const j of arreglo) {
    console.log(j + " ");
}
console.log();

bubbleSort(arreglo);

console.log("Después de ordenar los elementos del array son: ");
for (let j = 0; j < arreglo.length; j++) {
    console.log(arreglo[j] + " ");
}
console.log();