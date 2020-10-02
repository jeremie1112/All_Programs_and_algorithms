#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //declare variable
    int x;
    int factorial = 1;

     // take input from end-user
    cout << "Enter the Number :: ";
    cin >> x;

    // logic for factorial
    if(x<0)
    {
      cout << "Factorial of Negative numbers is not possible";
    }
    else
    {
      for(int i=1;i<x;i++)
      {
        factorial = factorial*(i+1);
      }
    }

    // display result
    cout << "Factorial= " << factorial << endl;

    return 0;
}