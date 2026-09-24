def merge(a,l,m,r):
    a1 = m - l+ 1              #Tamaño del primer array
    a2 = r - m                 #Tamaño del segundo array
    #Arrays temporales
    L = [0] * (a1)
    R = [0] * (a2)
    #Copia contenido de array a array temporal
    for j in range(0, a1):
        L[j] = a[l + j]
    for k in range(0, a2):
        R[k] = a[m + 1 + k]
    i = 0                      #Indice inicial array i
    j = 0                      #Indice inicial array j
    k = l                      #Indice inicial array mezcla
    while i < a1 and j < a2:   #Recorre ambos
        if L[i] <= R[j]:
            a[k] = L[i]
            i = i + 1
        else:
            a[k] = R[j]
            j = j + 1
        k = k + 1
    while i < a1:
        a[k] = L[i]
        i = i + 1
        k = k + 1

def mergeSort(a, l, r):
    if l < r:                  #Divide sin desordenar
        m = l + (r - l)//2     #Valores mas grandes
        mergeSort(a, l , m)
        mergeSort(a, m+1 , r)
        merge(a, l, m, r)

a = [39, 28, 44, 11]
s = len(a)

print("Antes de ordenar el arreglo: ")
for j in range(s):
    print(a[j], end=" ")
mergeSort(a, 0, s - 1)
print("\nDespues de ordenar el arreglo: ")
for j in range(s):
    print(a[j], end=" ")