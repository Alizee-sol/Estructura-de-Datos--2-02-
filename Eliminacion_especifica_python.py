#Eliminacion de un indice especifico //////////////////////////////////////////
eliminaciones=[11,21,31,41,51,61]
posicion=3                                         #Indice que vamos a eliminar
print("Antes de la eliminacion, el array es: ")
for indice in range(len(eliminaciones)):
    print(eliminaciones[indice], end=" ")
print()

eliminaciones.pop()

print("Después de la eliminacion, el array es: ")
for indice in range(len(eliminaciones)):
    print(eliminaciones[indice], end=" ")