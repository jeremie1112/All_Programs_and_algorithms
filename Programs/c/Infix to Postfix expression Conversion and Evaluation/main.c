#include <stdio.h>
#include <math.h>
#define SIZE 20
#include "stack.h"

int is_operator(char symbol)
{
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
	{
		return 1;
	}
	else
	{
	return 0;
	}
}

int precedence(char symbol)
{
	if(symbol == '^') // exponent operator, highest precedence
	{
		return(3);
	}
	else if(symbol == '*' || symbol == '/')
	{	 	  	   	   	  	      	    	 	
		return(2);
	}
	else if(symbol == '+' || symbol == '-')   // lowest precedence 
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])   // Converts infix to postfix
{   
    int i;
    int j = 0;
    for(i=0; infix_exp[i]!='\0'; i++)
    {   
        if(infix_exp[i] == '(')
        {
            push(infix_exp[i]);
        }
        else if(infix_exp[i] == ')')
        {  
            while(charStack[cTop] != '(')
            {
                postfix_exp[j] = pop();
                j++;
            }
            pop();
        }
        else if(is_operator(infix_exp[i]))
        {
            while(precedence(charStack[cTop]) >= precedence(infix_exp[i]))
            {
                postfix_exp[j] = pop();
                j++;
            }	 	  	   	   	  	      	    	 	
            push(infix_exp[i]);                     
        }
        else
        {
            postfix_exp[j] = infix_exp[i];
            j++;
        }      
    }
    while(cTop>-1)
    {
        postfix_exp[j] = pop();
        j++;
    }
}

float eval_postfix(char postfix_exp[])   // Evaluates postfix expression
{
    int i;
    float temp, item, op1, op2, res;
    for(i=0; postfix_exp[i] != '\0'; i++)
    {   
        if(is_operator(postfix_exp[i]))
        {
            op1 = fpop();
            op2 = fpop();

            if(postfix_exp[i] == '+')
            {
                temp = op2 + op1;
            }
            else if(postfix_exp[i] == '-')
            {
                temp = op2 - op1;
            }
            else if(postfix_exp[i] == '*')
            {	 	  	   	   	  	      	    	 	
                temp = op2 * op1;
            }
            else if(postfix_exp[i] == '/')
            {
                temp = op2 / op1;
            }
            else
            {
                temp = pow(op2,op1);
            }
            fpush(temp);
        }
        else
        {
            printf("Enter value of %c: ", postfix_exp[i]);
            scanf("%f", &item);
            fpush(item);
        }
    }

    res = fpop();
    return res;

}

int main()
{
    char infixExp[SIZE], postfixExp[SIZE];
    printf("Enter the infix expression: ");
    scanf("%s", infixExp); 

    InfixToPostfix(infixExp,postfixExp);

    printf("\nPostfix expression is: ");
    for(int i=0; postfixExp[i]!='\0'; i++)
    {	 	  	   	   	  	      	    	 	
        printf("%c", postfixExp[i]);
    }
    printf("\n\nEvaluating postfix expression...\n");
    printf("\nResult = %.2f",eval_postfix(postfixExp));
}

/*
    SAMPLE OUTPUT

    Enter the infix expression: (a+b)/(c+d)

    Postfix expression is: ab+cd+/  

    Evaluating postfix expression...
    Enter value of a: 9
    Enter value of b: 1
    Enter value of c: 4
    Enter value of d: 1

    Result = 2.00
*/