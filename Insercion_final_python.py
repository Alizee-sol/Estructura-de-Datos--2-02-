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