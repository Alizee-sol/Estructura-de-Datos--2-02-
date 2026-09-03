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

#Recorrido de Arreglo (Sólo lo muestra) //////////////////////////////////////////////////////////////
recorrido=[40,50,60,70,80,90]
print("Recorrido lineal (secuencial) es: ", end="")
for indice in recorrido:                              #Recorre el arreglo e imprime cada elemento
    print(indice, end=" ")
print()

#Recorrido inverso de Arreglo  ///////////////////////////////////////////////////////////////////////
recorridoin=[40,50,60,70,80,90]
print("Recorrido inverso del array es: ", end="")
for indice in range(len(recorridoin)-1,-1,-1):        #Recorre el array del final al principio
    print(recorridoin[indice], end=" ")
print()

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