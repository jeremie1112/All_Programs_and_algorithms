#include <stdio.h> 
  
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
    {
       for (j = 0; j < n-i-1; j++)  
       {
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
       }
    }
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int n;
    scanf("%d",&n);
    /*
    we can also use dynamic array instead of static array if any error arrises by malloc and at the end
    the program free the memory
    int *arr[] = (int*)malloc(sizeof(int*n));
    */  
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n); 
    printf("Array: \n"); 
    printArray(arr, n); 
    return 0; 
} 