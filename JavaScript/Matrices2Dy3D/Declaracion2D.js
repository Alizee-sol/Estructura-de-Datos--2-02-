const Array2d = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

console.log("Los elementos del array son: ");

// Recorre renglones
for (const row of Array2d) {
    console.log();
    
    for (const element of row) {
        console.log(element + " ");
    }
    
    // Imprime la fila completa y hace el salto automático
    console.log();
}