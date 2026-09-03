#Recorrido inverso de Arreglo  ///////////////////////////////////////////////////////////////////////
recorridoin=[40,50,60,70,80,90]
print("Recorrido inverso del array es: ", end="")
for indice in range(len(recorridoin)-1,-1,-1):        #Recorre el array del final al principio
    print(recorridoin[indice], end=" ")
print()