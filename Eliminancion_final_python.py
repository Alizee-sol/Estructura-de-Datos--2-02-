#Eliminacion del ultimo elemento del array //////////////////////////////////////
eliminaciones=[11,21,31,41,51,61]                                  
print("Antes de la eliminacion final, el array es: ")
for indice in range(len(eliminaciones)):
    print(eliminaciones[indice], end=" ")
print()

eliminaciones.pop()

print("Después de la eliminacion final, el array es: ")
for indice in range(len(eliminaciones)):
    print(eliminaciones[indice], end=" ")