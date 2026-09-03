#Busqueda secuencial ***********************************************************************************
def findEle(arreglo, izquierda, derecha, elemento):
    while izquierda <= derecha:
        medio = izquierda + (derecha - izquierda)//2
        if arreglo[medio] == elemento:
            return medio
        elif arreglo[medio] < x:
            izquierda = medio + 1
        else:
            derecha = medio - 1
    return -1

if __name__ == '__main__':
    arreglo=[12,34,10,6,40,89,98,57,19,69]
    elemento=40
    s = len(arreglo)
    indice = findEle(arreglo, 0, s - 1, elemento)
    if indice != -1:
        print("El elemento se encuentra en la posicion: " + str(indice +1))
    else:
        print("No se encuentra el elemento")