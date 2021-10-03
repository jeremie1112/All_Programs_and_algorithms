
void sparse_to_compact(int s[20][20],int row,int column)  //Function to convert sparse matrix to compact form
{
    int nz=0,k=1,i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(s[i][j]!=0)
            {
                nz++;
            }
        }
    }
    int c[nz+1][3];  //Declare compact matrix
    c[0][0]=row;
    c[0][1]=column;
    c[0][2]=nz;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(s[i][j]!=0)
            {
               c[k][0]=i;
               c[k][1]=j;
               c[k][2]=s[i][j];
               k++;
            }
        }
    }	 	  	   	   	  	      	    	 	
    printf("\nThe compact matrix form is:\n");
    for(i=0;i<nz+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}


void compact_to_sparse(int c[20][20])  //Function to convert Compact form matrix to Sparse matrix
{
    int row,column,nz,i,j;
    row=c[0][0];
    column=c[0][1];
    nz=c[0][2];
    int s[row][column]; //Declare sparse matrix

    for(i=0;i<row;i++)
    {	 	  	   	   	  	      	    	 	
        for(j=0;j<column;j++)
        {
            s[i][j]=0;      //set all elements of sparse matrix s to 0
        }
    }
     for(i=1; i<nz+1; i++)
    {
        for(j=0;j<column;j++)
        {
           s[c[i][0]][c[i][1]]=c[i][2]; 
        }
    }
    printf("\n\nThe sparse matrix form is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
}