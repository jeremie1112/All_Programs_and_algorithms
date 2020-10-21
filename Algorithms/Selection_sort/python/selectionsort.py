# Implementation of Selection Sort in Python

def selectionSort(A):
	# Traverse through all array elements 
	for i in range(len(A)): 
		
		# Find the least element in remaining array 
		least_element = i 
		for j in range(i+1, len(A)): 
			if A[least_element] > A[j]: 
				least_element = j 
				
		# Swap the found least element with initial element		 
		A[i], A[least_element] = A[least_element], A[i]
	
	# Return sorted array
	return(A)


# To test the code above
A = [100, 25, 50, 12, 7]
print(selectionSort(A)) # expected output: [7, 12, 25, 50, 100]
