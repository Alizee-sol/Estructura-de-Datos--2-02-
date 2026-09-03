#Eliminacion del primer elemento en un arreglo ///////////////////////////////////////////////////////
eliminacion=[11,21,31,41,51,61]
print("Antes de la eliminacion, el array es: ", end="")
for idx in range(len(eliminacion)):
    print(eliminacion[idx], end=" ")
print()
    
del eliminacion[0]                                   #Elimina el elemento en el indice 0

print("Después de la eliminacion, el array es: ", end="")
for idx in range(len(eliminacion)):
    print(eliminacion[idx], end=" ")                 #Recorre los elementos del array
print()