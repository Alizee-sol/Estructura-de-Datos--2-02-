// Declaracion de array
const recorridoin = [40, 50, 60, 70, 80, 90];

// Variable que va a guardar el largo del array
const largo = recorridoin.length;

console.log("Recorrido lineal (secuencial) es: ");

//For(of) para recorrer arreglo desde el final al principio
for (let indice = largo - 1; indice >= 0; indice--) {
    console.log(recorridoin[indice] + " ");
}

console.log();