
#include<stdio.h>
#include"convert.h"

int main()
{
    int arr[20][20], row, column, i, j , ch;
    char choice;
    do
    {
        printf("\n1. Convert a given sparse matrix(S) to its compact form (C)\n"
            "2. Convert a given compact form matrix (C) to its sparse form (S)\n\n"
            "Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nEnter number of rows and columns of sparse matrix(Row[Max. 20] Column[Max. 20]): ");
                scanf("%d %d",&row, &column);
                printf("\nEnter sparse matrix:\n");
                for(i=0; i<row; i++)
                {
                    for(j=0; j<column; j++)
                    {
                        scanf("%d",&arr[i][j]);
                    }
                }
                sparse_to_compact(arr, row, column);
                break;

            case 2:

                printf("\nEnter no. of rows of compact matrix(Max. 20): ");
                scanf("%d",&row);
                column=3;
                printf("\nEnter compact matrix:\n");
                for(i=0;i<row;i++)
                {	 	  	   	   	  	      	    	 	
                    for(j=0;j<column;j++)
                    {
                        scanf("%d",&arr[i][j]);
                    }
                }
                compact_to_sparse(arr);
                break;
            
            default:
                printf("Invalid choice!");
                break;
        }  
        printf("\n\nDo you want to continue? (Press Y/N):");
        scanf(" %c", &choice);
    }
    while(choice=='y'||choice=='Y');

    return 0;
}

/*
    SAMPLE OUTPUT

    1. Convert a given sparse matrix(S) to its compact form (C)      
    2. Convert a given compact form matrix (C) to its sparse form (S)

    Enter your choice: 1

    Enter number of rows and columns of sparse matrix : 4 3 

    Enter sparse matrix :
    2 0 0
    0 0 0
    3 2 1
    0 0 0

    The compact matrix form is:
    4       3       4
    0       0       2
    2       0       3
    2       1       2
    2       2       1


    Do you want to continue? (Press Y/N):y

    1. Convert a given sparse matrix(S) to its compact form (C)
    2. Convert a given compact form matrix (C) to its sparse form (S)

    Enter your choice: 2

    Enter no. of rows of compact matrix: 5

    Enter compact matrix:
    4 3 4
    0 0 2
    2 0 3
    2 1 2
    2 2 1


    The sparse matrix form is:
    2       0       0
    0       0       0
    3       2       1
    0       0       0


    Do you want to continue? (Press Y/N):N
*/	 	  	   	   	  	      	    	 	
