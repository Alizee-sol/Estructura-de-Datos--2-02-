def bubbleSort(array):
    s = len(array)

    for i in range(s):
        Swapped = False
        # Los últimos i elementos ya están en su lugar correspondiente.
        for j in range(0, s - i - 1):
            # Recorriendo el array de 0 a s - i - 1
            # # Intercambiando si el elemento encontrado es mayor
            # que el siguiente elemento
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                Swapped = True
        if (Swapped == False):
            break

# Código del controlador para la prueba anterior
if __name__ == "__main__":
    a = [15, 16, 11, 13, 14]
    print("Antes de ordenar los elementos del array son: ")
    for j in a:
        print(j, end=' ')
        
    bubbleSort(a)
    print("\nDespués de ordenar los elementos del array son: ")
    for j in range(len(a)):
        print("%d" % a[j], end=" ")
