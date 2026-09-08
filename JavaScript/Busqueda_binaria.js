function findEle(arreglo, izquierda, derecha, elemento) {
    while (izquierda <= derecha) {
        // Math.floor = '//' de Python
        let medio = izquierda + Math.floor((derecha - izquierda) / 2);
        
        if (arreglo[medio] === elemento) {
            return medio;
        } else if (arreglo[medio] < elemento) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1;
}

const arreglo = [12, 34, 10, 6, 40, 89, 98, 57, 19, 69];
const elemento = 40;
const largo = arreglo.length;

//(a, b) = elementos a buscar
//(a - b) = revisa que a - b = positivo
arreglo.sort((a, b) => a - b);
const indice = findEle(arreglo, 0, largo - 1, elemento);

if (indice !== -1) {
    console.log("El elemento se encuentra en la posicion: " + (indice + 1));
} else {
    console.log("No se encuentra el elemento");
}