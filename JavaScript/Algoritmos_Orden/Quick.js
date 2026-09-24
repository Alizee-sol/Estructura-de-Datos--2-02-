function swap(a, j, k) 
{
    let temp = a[j];
    a[j] = a[k];
    a[k] = temp;
}

function partition(a, l, h) 
{
    let pvt = a[h];
    let j = l - 1;
    for (let k = l; k < h; k++) {
        if (a[k] < pvt) {
            j++;
            swap(a, j, k);
        }
    }
    swap(a, j + 1, h);
    return j + 1;
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