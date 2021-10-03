number_of_elements = int(input("Enter the number of elements: "))
arr = []
for i in range(number_of_elements):
    arr.append(int(input("Enter the elements {}: ".format(i + 1))))

maxNumber = max(arr)
bucket = []
for i in range(maxNumber+1):
    bucket.append(0)

for i in arr:
    bucket[i] = bucket[i] + 1

sortedArray = []
for i in range(maxNumber+1):
    while bucket[i] > 0:
        sortedArray.append(str(i))
        bucket[i] = bucket[i] - 1

print(" ".join(sortedArray))