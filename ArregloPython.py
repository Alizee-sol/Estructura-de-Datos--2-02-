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

#insercion al final del arreglo /////////////////////////////////////////////////////////////////////
insercionfin=[11,21,31,41,51,61]
elefin=52
print("Antes de la insercion, el array es: ", end="")
for idx in range(len(insercionfin)):
    print(insercionfin[idx], end=" ")
print()
    
insercionfin.append(elefin)                              #Inserta la variable "elefin"

print("Después de la eliminacion, el array es: ", end="")
for idx in range(len(insercionfin)):
    print(insercionfin[idx], end=" ")
print()