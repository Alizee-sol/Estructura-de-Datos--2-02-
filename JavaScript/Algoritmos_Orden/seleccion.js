function selection(a) {
    for (let i = 0; i < a.length; i++) {
        let small = i;
        for (let j = i + 1; j < a.length; j++) {
            if (a[small] > a[j]) {
                small = j;
            }
        }
        //Intercambio igual que en Python
        [a[i], a[small]] = [a[small], a[i]];
    }
}

function printArr(a) {
    let salida = "";
    for (let i = 0; i < a.length; i++) {
        salida += a[i] + " ";
    }
    console.log(salida);
}

let a = [65, 26, 13, 23, 12];

console.log("Arrelo antes de ser ordenado: ");
printArr(a);

selection(a);

console.log("Arreglo después de ser ordenado: ");
selection(a);
printArr(a);