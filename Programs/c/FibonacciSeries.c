// C program to implement fibonacci series

#include <stdio.h>
#include <conio.h>

        //function to find the fibonacci series
       
		int fibonacci(int n)
		{
			if(n <= 1)
			
			  return n;
			  
			  // finding fibonacci series using recursion
			
			return fibonacci(n-1) + fibonacci(n-2);  
		}
		
		//main function to control program execution by calling other functions
		
		int main()
		{
			int num;
			 
			 printf("Enter the number ");
			  scanf("%d",&num);
			  
			   printf("%d", fibonacci(num)); 
			   
               getchar(); 
               
        return 0; 
		}