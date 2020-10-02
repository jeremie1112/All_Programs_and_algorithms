#include <stdio.h>

int binarysearch(int arr[], int first, int last, int key, int flag)
{
   if(flag>=1)
   {
        int mid=(last+first)/2;
        //three cases

        //case 1: if element is at middle itself
        if(arr[mid]==key)
            return mid;
        //case 2: if element is greater than mid
        if(arr[mid]<key)
            return binarysearch(arr, mid+1, last, key, 1);
        //case 3: if element is less than mid
        if(arr[mid]>key)
            return binarysearch(arr, first, mid-1, key, 1);
   }

   else 
        return -1;

   }
//driver function
int main(void)
{   
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 4;
    //if the arr is already sorted, give flag = 1 else -1
    int result = binarysearch(arr, 0 , n, key, 1);
    (result==-1)?printf("Element is not present in the array"):
                 printf("Element is present at index %d",result);

}
