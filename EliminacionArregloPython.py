arr=[11,21,31,41,51,61]
print("Antes de la eliminacion, el array es: ")
for idx in range(len(arr)):
    print(arr[idx], end=" ")
print()
    
del arr[0]

print("Después de la eliminacion, el array es: ")
for idx in range(len(arr)):
    print(arr[idx], end=" ")