#include <stdio.h>

int main(void) {
    int t;
    scanf("%d\n",&t);//for test case input
    for(int k=0;k<t;k++)//to run all the test cases
    {
        long long int n;
        int a,b,c,d,e,f;
        scanf("%lld\n",&n);
        a=n/100;//here a will give possible denominations of 100rs notes
        n=n%100;
        b=n/50;//here b will give possible denominations of 50rs notes
        n=n%50;
        c=n/10;//here c will give possible denominations of 10rs notes
        n=n%10;
        d=n/5;//here d will give possible denominations of 5rs notes
        n=n%5;
        e=n/2;//here e will give possible denominations of 2rs notes
        n=n%2;
        f=1;//here we will add f when the number n is an odd number
        if(n%2==0)
        printf("%d\n",a+b+c+d+e);
        if(n%2!=0)
        printf("%d\n",a+b+c+d+e+f);
        
    }
	return 0;
}
