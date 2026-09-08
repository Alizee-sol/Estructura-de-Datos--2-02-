function findEle(arreglo, largo, elemento) {
    for (let indice = 0; indice < largo; indice++) {
        if (arreglo[indice] === elemento) {
            return indice;
        }
    }
    return -1;
}
const arreglo = [12, 34, 10, 6, 40, 89, 98, 57, 19, 69];
const elemento = 19;
const largo = arreglo.length;

const indice = findEle(arreglo, largo, elemento);

if (indice !== -1) {
    console.log("El elemento se encuentra en la posicion: " + (indice + 1));
} else {
    console.log("No se encuentra el elemento");
}