// Global declarations
char charStack[SIZE];  
int cTop = -1;

float fStack[SIZE];
int fTop = -1;

// define push operation for character stack
void push(char item)
{
	if(cTop >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		cTop = cTop+1;
		charStack[cTop] = item;
	}
}

// define pop operation for character stack 
char pop()
{
	char item ;

	if(cTop < 0)
	{
		printf("Stack underflow");
	}
	else
	{	 	  	   	   	  	      	    	 	
		item = charStack[cTop];
		cTop = cTop-1;
		return(item);
	}
}

// define push operation for floating point stack 
void fpush(float item)
{
	if(fTop >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		fTop = fTop+1;
		fStack[fTop] = item;
	}
}

// define pop operation for floating point stack 
float fpop()
{
	float item ;

	if(fTop < 0)
	{
		printf("Stack underflow");
	}
	else
	{
		item = fStack[fTop];
		fTop = fTop-1;
		return(item);
	}
}	 	  	   	   	  	      	    	 	