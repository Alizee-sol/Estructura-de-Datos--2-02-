# Orden por filas de Matriz 2d 

# Declaracion del tamaño de X y Y
r = 3; c = 3

# Declaracion del arreglo vacío donde se van a acomodar los elementos del arreglo 2d
arr = [0] * r * c 

# Declacion de una matriz 2d
Array2d = [[1,2,3],
           [4,5,6],
           [7,8,9]]
k = 0

for x in range(r):                   # X recorre el rango de R (3)
    for y in range(c):               # Y recorre el rango de C (3)
        k = x * r + y                # Formula para acomodar la matriz en una fila
        arr[k] = Array2d[x][y]       # Dejamos el valor de K en la array nueva
        k = k + 1

# Recorrido de la matriz 2d (En cuadradito)
print("Los elementos del array bidimensional son: ")
for row in Array2d:                  # Recorre renglones
    for ele in row:                  # Recorre los elementos de cada renglon
        print(ele, end=" ")          # Muestra elementos
    print()

# Recorrido de la matriz 2d (En una sola línea, fila tras fila)
print("\nLos elementos del array unidimensional son: ")
for x in range(r):                   # X recorre el rango de R (3)
    for y in range(c):               # Y recorre el rango de C (3)
        print(arr[x * r + y], end=" ") 