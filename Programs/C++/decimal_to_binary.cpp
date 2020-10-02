#include <iostream>

using namespace std;
void binary(int decimal);

void binary(int decimal)
{ 
     int rest;
     int result;

     if ( decimal <=1)
     {
        cout<<decimal;
        return;
     }
     rest = decimal %2;
     result = decimal / 2;
     binary(result);
     cout<<rest;
}

int main()
{
    int a;
    cout << "Enter the number to be converted : ";
    cin>>a;
    cout << a << " in binary is " ; 
    binary(a);
    cout<<endl;
}