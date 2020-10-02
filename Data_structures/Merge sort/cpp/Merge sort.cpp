//Merge sort
#include<stdio.h>
#include<conio.h>

void merge(int arr[20], int first, int mid, int last)
{
    int i, j, k;

    //Storing the number of values from first half of the array in n1
    int n1 = (mid - first) + 1;

    //Storing the number of values from second half of the array in n2
    int n2 = last - mid;

    //Declaring to empty arrays
    int l[10], r[10];

    for(i = 0; i < n1; i++)
    {
        //Transfering values of original array to l(only the values of first half)
        l[i] = arr[first + i];
    }

    for(j = 0; j < n2; j++)
    {
        r[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = first;

    while(i < n1 && j < n2)
    {
        //Comparing the elements from temp. array(l & r) and then storing them to the original array
        if(l[i] <= r[j])
        {            
            arr[k] = l[i];
            i++;
        }
        else
        {
            arr[k] = r[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergesort(int arr[20], int first, int last) 
{
    int mid;
    if(first < last)
    {
        mid = (first + last) / 2;

        //Divide the first part of the array
        mergesort(arr, first, mid);

        //Divide the second part of the array
        mergesort(arr, mid + 1, last);

        //Merge all the arrays to one
        merge(arr, first, mid, last);
    }
}

int main()
{
    int arr[20], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    //Accepting rray elements
    printf("\nEnter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Printing the original array
    printf("\nThe original array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }

    //Calling mergesort function to divide the array into parts
    mergesort(arr, 0, n-1);

    //Printing the sorted array
    printf("\nThe sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    
    return 0;
}
