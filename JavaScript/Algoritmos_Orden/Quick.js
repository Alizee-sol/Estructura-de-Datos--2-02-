function swap(a, j, k) 
{

}

function partition(a, l, h) 
{

}

function qckSort(a, l, h) 
{
    if (l < h) {
        let pi = partition(a, l, h);
        qckSort(a, l, pi - 1);
        qckSort(a, pi + 1, h);
    }
}

let arreglo = [10, 7, 8, 9, 1, 5];
let largo = arreglo.length;

console.log("Antes de ordenar los elementos del array son: ");
for (const j of arreglo) {
    console.log(j + " ");
}
console.log();

qckSort(arreglo, 0, largo - 1)

console.log("Después de ordenar los elementos del array son: ");
for (let j = 0; j < largo; j++) {
    console.log(arreglo[j] + " ");
}
console.log();