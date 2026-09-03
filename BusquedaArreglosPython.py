#Busqueda secuencial ***********************************************************************************
def findEle(arreglo, s, elemento):
    for indice in range(s):
        if (arreglo[indice] == elemento):
            return indice
    return -1
if __name__ == '__main__':
    arreglo=[12,34,10,6,40,89,98,57,19,69]
    elemento=19
    s = len(arreglo)
    indice = findEle(arreglo, s, elemento)
    if indice != -1:
        print("El elemento se encuentra en la posicion: " + str(indice +1))
    else:
        print("No se encuentra el elemento")


