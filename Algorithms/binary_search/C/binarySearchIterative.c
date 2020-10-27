#include <stdio.h> 
  
// A iterative binary search function. It returns location of key in given array arr[l..r] if present, otherwise -1 

int binarySearch(int arr[], int l, int r, int key) 
{ 
  while (l <= r) 
  { 
    int m = l + (r-l)/2; 
  
    // Check if key is present at mid 
    if (arr[m] == key)  
        return m;   
  
    // If key greater, ignore left half   
    if (arr[m] < key)  
        l = m + 1;  
  
    // If key is smaller, ignore right half  
    else 
         r = m - 1;  
  } 
  
  // if we reach here, then element was not present 
  return -1;  
} 

// main function

int main(void) 
{ 
   int arr[] = {2, 3, 4, 10, 40}; 
   int n = sizeof(arr)/ sizeof(arr[0]); 
   int key = 10; 
   int result = binarySearch(arr, 0, n-1, key); 
   (result == -1)? printf("Element is not present in array") 
                 : printf("Element is present at index %d", result); 
   return 0; 
} 