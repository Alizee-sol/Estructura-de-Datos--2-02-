# Matriz 3d //////////////////////////////
# 
# Declacion de una matriz 3d
Array3d = [[[1,2,3],
           [4,5,6],
           [7,8,9]], 
           [[10,11,12],
            [13,14,15],
            [16,17,18]]] #[[[]]]

# Recorrido de la matriz 3d
print("Los elementos del array son: ")
for Array2d in Array3d:                   # Recorre bloques de arreglo
    for row in Array2d:                   # Recorre renglones
            print()                       # Salto entre cada fila
            for element in row:           # Recorre elementos de cada renglon (columnas)
                print(element, end=" ")
    print()