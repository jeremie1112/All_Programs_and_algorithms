#include <iostream>
using namespace std;
int main()
{
    //declare variable
    double x;
    double perfect_square;

     // take input from end-user
    cout << "Enter the Number :: ";
    cin >> x;

    // calculate perfect square value
    perfect_square = x*x;

    // display result
    cout << "Perfect Square= " << perfect_square << endl;

    return 0;
}