// Declaracion de array
const eliminacionse = [11, 21, 31, 41, 51, 61];

// Variable que va a guardar el largo del array
const largo = eliminacionse.length;
// variables que va a guardar el indice a eliminar
const idx = 3;

//Recorrer el antes
console.log("El arreglo antes de la eliminacion selectiva es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(eliminacionse[indice] + " ");
}

// Elimina. (Lndice, número a eliminar)
eliminacionse.splice(posicion - 1, 1);

// recorrido del resultado
console.log("El arreglo antes de la eliminacion selectiva es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(eliminacionse[indice] + " ");
}

console.log();