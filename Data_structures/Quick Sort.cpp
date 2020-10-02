#include<stdio.h>

void quicksort(int arr[20], int first, int last) 
{
	int i, j, temp, pivot;
	
	if(first < last)
	{
		pivot = first;
		i = first;
		j = last;
		
		while(i < j)
		{
			// Find the larger number than pivot, if present swap it
			while(arr[i] <= arr[pivot] && i < last)
			{
				i++;
			}
			
			// Find the smaller number than pivot, if present swap it
			while(arr[j] > arr[pivot])
			{
				j--;
			}
			
			if(i < j)
			{
				// Interchange the values of i and j 
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		
		// Here the pivot is placed at it's right value i.e smaller no on left and greater on the right
		temp = arr[pivot];
		arr[pivot] = arr[j];
		arr[j] = temp;
		
		// To run the same program for the first half of the array
		quicksort(arr, first, j-1);
		
		// To run the same program for the second part of the array
		quicksort(arr, j+1, last);
	}
}



int main()
{
	int i, arr[20], n;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	printf("Enter the number of elements: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	quicksort(arr, 0, n-1);
	
	printf("\n");
	printf("The sorted array is: ");
	for(i = 0; i < n; i++)
	{
		printf("\t%d", arr[i]);
	}
	
	return 0;
}
