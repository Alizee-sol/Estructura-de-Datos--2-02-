// Declaracion de array
const eliminacionfin = [11, 21, 31, 41, 51, 61];

// Variable que va a guardar el largo del array
const largo = eliminacionfin.length;

//Recorrer el antes
console.log("El arreglo antes de la eliminacion final es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(eliminacionfin[indice] + " ");
}
// elimina el ultimo elemento del array
eliminacionfin.pop();

// recorrido del resultado
console.log("El arreglo antes de la eliminacion final es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(eliminacionfin[indice] + " ");
}

console.log();