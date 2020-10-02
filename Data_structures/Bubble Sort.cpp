//Bubble Sort
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,temp,a[20],n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    //Accepting array elements and storing them
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //printing the original array
    printf("The original array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    

    //Bubble Sort Logic
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    
    printf("\n");
    
	//printing the sorted array
    printf("The sorted array is: \n");
    for (i = 0; i < n; i++)
    {
    	printf("\t%d", a[i]);
	}
	
	return 0;
    
}
