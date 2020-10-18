#include <iostream>
using namespace std;

int main() {
    int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the n array elements"<<endl;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}
