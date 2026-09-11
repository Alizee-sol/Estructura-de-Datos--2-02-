const Array3d = [[
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
], [
    [11, 12, 13],
    [14, 15, 16],
    [17, 18, 19]
]];

console.log("Los elementos del array son: ");

for (const Array2d of Array3d)
{
for (const row of Array2d) {
    console.log();
    
    for (const element of row) {
        console.log(element + " ");
    }
    
    console.log();
}
}