# https://en.wikipedia.org/wiki/Bogosort

import random


def sorted(arr):
    for i in range(0, len(arr)-1):
        if(arr[i] > arr[i+1]):
            return False
    return True


def bogosort(arr):
    while not sorted(arr):
        random.shuffle(arr)


arr = [12, 11, 13, 5, 6]
bogosort(arr)
print("Sorted array is:")
for i in range(len(arr)):
    print("%d" % arr[i])
