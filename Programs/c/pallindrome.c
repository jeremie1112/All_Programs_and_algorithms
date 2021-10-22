#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],copy[10];
	int i,n;
	printf("Enter the string: ");
	scanf("%c",s);
	n=strlen(s);
	for(i=n-1;i>=0;i--)
	{
		copy[n-i]=s[i];
	}
	if(s==copy)
	printf("The given string is pallindrome");
	else
	printf("The given string is pallindrome");
	return 0;
}
