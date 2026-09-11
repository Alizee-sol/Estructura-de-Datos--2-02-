//Declaracion del arreglo donde voy a vaciar el array2d
const xs = 3, ys = 3;
//funcion fill() para rellenar con 0 por mientras
const arr = new Array(xs * ys).fill(0);

const Array2d = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

//formula para vaciar array 2d en fila 1d
let k = 0;
for (let x = 0; x < xs; x++) {
    for (let y = 0; y < ys; y++) {
        k = x * xs + y;
        arr[k] = Array2d[x][y];
        k = k + 1;
    }
}

//Arreglo cuadradito
console.log("Los elementos del array bidimensional son: ");
for (const row of Array2d) {
    console.log();
    for (const ele of row) {
        console.log(ele + " ");
    }
    console.log();
}

//arreglo en fila 1d
console.log("Los elementos del array unidimensional son: ");
for (let x = 0; x < xs; x++) {
    for (let y = 0; y < ys; y++) {
        console.log(arr[x * xs + y] + " ");
    }
}