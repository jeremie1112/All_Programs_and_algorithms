// C program to find out armstrong number

 #include <conio.h>
 #include <stdio.h>
 
      // function to calculate m raised to the power n
 
		int power(int m, int n)
		{
			if(n == 0)
			 return 1;
			
			if(n % 2 == 0)
			  return power(m, n/2) * power(m, n/2);
			  
			return m* power(m, n/2) * power(m, n/2);  
		}
		
		// function to count number of digits in a number
		
		int NumOfDigits(int m)
		{
			int x = 0;
			
			 while(m != 0)
			 {
			 	x++;
			 	m = m/10;
			 }
		 
		   return x;
		 	
		}
		
		// function to check whether the number is Armstrong or Not
		
		int isArmstrong(int m)
		{
			int x = NumOfDigits(m);
			int temp = m, sum = 0;
			
			 while(temp != 0)
			 {
			 	int r = temp % 10; 
                sum += power(r, x); 
                temp = temp / 10; 
			 }
			 
			 // Armstrong condition satisfied 
			 
			 if(sum == m)
			   return 1;
			 else
			   return 0;  
		}
		
		//main function to control program execution by calling other functions
		
		int main()
		{
			int num;
			printf("Enter the number \n");
			 scanf("%d", &num);
			 
			if(isArmstrong(num) == 1)
			   printf("Armstrong Number");
			else
			   printf("Not an Armstrong Number");
			   
		 return 0;	      
		}