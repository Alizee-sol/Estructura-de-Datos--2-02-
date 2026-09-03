# Busqueda binaria ***********************************************************************************
def findEle(arreglo, izquierda, derecha, elemento):
    while izquierda <= derecha:
        medio = izquierda + (derecha - izquierda)//2
        if arreglo[medio] == elemento:
            return medio
        elif arreglo[medio] < elemento:
            izquierda = medio + 1
        else:
            derecha = medio - 1
    return -1

if __name__ == '__main__':
    arreglo=[12,34,10,6,40,89,98,57,19,69]
    arreglo.sort()                                              # Orden del arreglo
    elemento=40

    s = len(arreglo)                                            # Define el argo del arreglo
    indice = findEle(arreglo, 0, s - 1, elemento)               # (s - 1) para que el resultado coincida con lo visible
    if indice != -1:
        print("El elemento se encuentra en la posicion: " + str(indice))
    else:
        print("No se encuentra el elemento")