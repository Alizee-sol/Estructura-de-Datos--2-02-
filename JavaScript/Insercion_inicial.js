// Declaracion de array y el elemento que vamos a insertar
const insercion = [11, 21, 31, 41, 51, 61];
const ele = 52;

// Variable que va a guardar el largo del array
const largo = insercion.length;

//Recorrer el antes
console.log("El arreglo antes de la insercion es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(insercion[indice] + " ");
}
 // Empujo el ele al indice 0 y recorre el resto
insercion.unshift(ele);

// recorrido del resultado
console.log("El arreglo antes de la insercion es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(insercion[indice] + " ");
}

console.log();