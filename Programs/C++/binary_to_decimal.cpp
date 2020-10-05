#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{   string s;
    ll res=0;
    cout<<"Enter a binary number"<<endl;
    cin>>s;
    for(ll i=0; i<s.size(); i++)
    {
        res+=pow(2,s.size()-i-1)*(s[i]-48);
    }
    cout<<"The binary number "<<s<<" in decimal is "<<res<<endl;
    return 0;
}