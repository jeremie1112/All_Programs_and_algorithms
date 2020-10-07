#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,count=0,temp;
    cout<<"ENTER A NUMBER"<<endl;
    cin>>n;
    temp=n;
    while(temp>0)
    {
        temp/=10;
        count++;
    }

    cout<<"NUMBER OF DIGITS IN "<<n<<" = "<<count<<endl;
    
    return 0;
}