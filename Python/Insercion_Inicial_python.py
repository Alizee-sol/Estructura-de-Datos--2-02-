#insercion de un elemento en el indice 0 del arreglo /////////////////////////////////////////////////
insercion=[11,21,31,41,51,61]
ele=52
print("Antes de la insercion, el array es: ", end="")
for idx in range(len(insercion)):
    print(insercion[idx], end=" ")
print()
    
insercion.insert(0, ele)                              #Inserta en el indice 0, la variable "ele"

print("Después de la eliminacion, el array es: ", end="")
for idx in range(len(insercion)):
    print(insercion[idx], end=" ")
print()