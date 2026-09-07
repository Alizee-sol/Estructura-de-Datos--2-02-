// Declaracion de array
const eliminacion = [11, 21, 31, 41, 51, 61];

// Variable que va a guardar el largo del array
const largo = eliminacion.length;

//Recorrer el antes
console.log("El arreglo antes de la eliminacion inicial es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(eliminacion[indice] + " ");
}
// elimina el primer elemento del array
eliminacion.shift();

// recorrido del resultado
console.log("El arreglo antes de la eliminacion inicial es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(eliminacion[indice] + " ");
}

console.log();