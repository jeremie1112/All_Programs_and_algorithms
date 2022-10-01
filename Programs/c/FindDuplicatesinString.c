#include<stdio.h>
//Finding Duplicate in a String using BItwise Operator
int main()
{
    char A[]="Hacktoberfest";
    int x=0,H=0,i;
    for(i=0;A[i]!='\0';i++)
    {
        x=1;
        x=x<<A[i]-97;
        if(x&H)
        printf("%c is Duplicate \n",A[i]);
        else
        {
        H=x|H;
        }
    }
    
    return 0;

}