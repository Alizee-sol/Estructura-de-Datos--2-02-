# Matriz 2d //////////////////////////////
# 
# Declacion de una matriz 2d
Array2d = [[1,2,3],
           [4,5,6],
           [7,8,9]]

# Recorrido de la matriz 2d
print("Los elementos del array son: ")
for row in Array2d:                   # Recorre renglones
    for element in row:               # Recorre los elementos de cada renglon
        print(element, end=" ")
    print()