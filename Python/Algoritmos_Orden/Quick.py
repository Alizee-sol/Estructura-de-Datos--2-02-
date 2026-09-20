def selection(a):
    #recorre todo el arreglo
    for i in range(len(a)):
        #indice del elemento más pequeño
        small = i
        # encuentra el elemento más pequeño en el arreglo
        for j in range(i+1, len(a)):
            #compara el elemento más pequeño con el siguiente elemento
            if a[small] > a[j]: 
                #actualiza el indice del elemento más pequeño
                small = j
        #intercambia el elemento más pequeño con el primer elemento
        #intercambia los elementos
        a[i], a[small] = a[small], a[i]

def printArr(a):
    for i in range(len(a)):         #recorre todo el arreglo
        print (a[i], end = " ")     #imprime el elemento
a = [65, 26, 13, 23, 12]            #arreglo desordenado

print("Arrelo antes de ser ordenado: ")
printArr(a)
selection(a)
print("\nArreglo después de ser ordenado: ")
selection(a)
printArr(a)