

#include <stdio.h>
int a[100][100],i,j,n,m,p,q;

int swap()
{
    int temp=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=a[i][j];
           
            a[i][j]=a[j][i];
            
            a[j][i]=temp;
            
        }
    }
    printf("Transpose of the matrix\n");
    for( i=0;i<m;i++)
    {
    
    
    for(j=0;j<n;j++)
    {
    printf(" %d ",a[i][j]);
    }
    printf("\n");

}
    
}

int main()
{

printf("Enter order of matrix :");
scanf("%d %d",&n,&m);
 for( i=0;i<n;i++)
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
    printf("Original matrix is\n");
    for( i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    
    swap();
}

