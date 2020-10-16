# https://en.wikipedia.org/wiki/Bogosort

import random


def sorted(arr):
    for i in range(0, len(arr)-1):
        if(arr[i] > arr[i+1]):
            return False
    return True


def bozosort(arr):
    while not sorted(arr):
        temp1 = random.randint(0, len(arr)-1)
        temp2 = random.randint(0, len(arr)-1)
        arr[temp1],arr[temp2] = arr[temp2],arr[temp1]


arr = [12, 11, 13, 5, 6]
bozosort(arr)
print("Sorted array is:")
for i in range(len(arr)):
    print("%d" % arr[i])
