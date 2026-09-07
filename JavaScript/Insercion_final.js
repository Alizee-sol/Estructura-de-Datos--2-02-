// Declaracion de array y el elemento que vamos a insertar
const insercionfin = [11, 21, 31, 41, 51, 61];
const ele = 52;

// Variable que va a guardar el largo del array
const largo = insercionfin.length;

//Recorrer el antes
console.log("El arreglo antes de la insercion final es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(insercionfin[indice] + " ");
}
 // Empujo el ele al final del arreglo
insercionfin.push(ele);

// recorrido del resultado
console.log("El arreglo antes de la insercion final es: ");
for (let indice = 0; indice < largo; indice++) {
    console.log(insercionfin[indice] + " ");
}

console.log();