#include <stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
    printf("Sorted array: ")
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void main()
{
    int size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements in array: ");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    bubbleSort(arr,size);
}