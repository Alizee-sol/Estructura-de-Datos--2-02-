def insercionSort(arreglo):
    for indice in range (1, len(arreglo)):
        elegido = arreglo[indice]

        puntero = indice-1
        while puntero >= 0 and elegido < arreglo[puntero]:
            arreglo[puntero+1] = arreglo[puntero]
            puntero = puntero-1
        arreglo[puntero+1]= elegido

def printAr(arreglo):
    for indice in range(len(arreglo)):
        print(arreglo[indice], end = " ")
    
arreglo = [70, 15, 2, 51, 60]

print("Antes de ordenar los elementos del arreglo: ")
printAr(arreglo)
insercionSort(arreglo)
print()
print("Despues de ordenar los elementos del arreglo: ")
printAr(arreglo)
