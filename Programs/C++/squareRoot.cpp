#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //declare variable
    double x;
    double square_root;

     // take input from end-user
    cout << "Enter the Number :: ";
    cin >> x;

    // calculate square root value
    square_root = sqrt(x);

    // display result
    cout << "Square Root= " << square_root << endl;

    return 0;
}