bubbleSort(array)
n = length(array)

repeat
    swapped = False
    for i = 1 to n-1
        if array[i-1] > array[i], then
        swap(array[i-1], array[i])
