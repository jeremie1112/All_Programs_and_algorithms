#include <stdio.h>    
     
int main()    
{    
    
    int arr[] = {1, 2, 3, 4, 5};     
   
    int length = sizeof(arr)/sizeof(arr[0]);    
    //n determine the number of times an array should be rotated    
    int n = 3;    
        
        
    //Rotate the given array by n times toward right    
    for(int i = 0; i < n; i++){    
        int j, last;    
        last = arr[length-1];    
        
        for(j = length-1; j > 0; j--){    
            arr[j] = arr[j-1];    
        }    
        arr[0] = last;    
    }    
        
    printf("Array after right rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}
