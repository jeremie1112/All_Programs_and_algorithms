# Code by : https://github.com/MaxTronn

# This is function does Counting Sort of array according to the digit
# represented by exponent
def CountingSort(array, exponent):
    size = len(array)

    # In output_array, we store the output of the CountingSort function
    output_array = [0]*size

    count_array = [0]*10

    # we store the count of occurrences in count_array
    for i in range(0, size):
        index = array[i] // exponent
        count_array[index % 10] += 1

    # Now, we find the actual position of each digit in output_array
    for i in range(1,10):
        count_array[i] += count_array[i-1]

    # We store the sorted elements in the output_array
    i = size - 1
    while i>=0 :
        index = array[i] // exponent
        output_array[ count_array[ index % 10 ] - 1] = array[i]
        count_array[index%10] -= 1
        i-=1

    # Copy contents of output_array to array
    i = 0
    for i in range(0, size):
        array[i] = output_array[i]

#This is the function to be called for Radix Sort
def RadixSort(array):

    # max_element contains the element with maximum value in the array to find the number of digits
    max_element = max(array)

    # Here exponent is the digit number for which counting sort is done.
    # We do Counting Sort for each digit. After Counting sort for a value of exponent is done,
    # we update the value of exponent to 10*exponent
    exponent = 1;
    while max_element / exponent > 0 :
        CountingSort(array, exponent)
        exponent *= 10


# Driver Code
array = [25, 8, 12, 333, 4083, 5, 10, 766]

RadixSort(array);

for i in array:
    print(i)