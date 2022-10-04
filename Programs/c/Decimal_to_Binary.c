#include<stdio.h>    
#include<stdlib.h>  


int main(){  
  
int a[10],n,i,d;    
 
printf("Enter the decimal: ");    
scanf("%d",&n);
d = n;
  
for(i=0;n>0;i++)    
{    
    a[i]=n%2;    
    n=n/2;    
} 
  
printf("\nBinary equivalent of the number %d is ",d);    
for(i=i-1;i>=0;i--)    
{    
    printf("%d",a[i]);    
}  
  
return 0;  
}  
