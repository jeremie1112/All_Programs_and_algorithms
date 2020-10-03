#include <bits/stdc++.h>

using namespace std;

int fibonacci_printer(int n) {

    std::vector<int> v(n,0);
    v[0]=0;v[1]=1;
    for(int i=2;i<n;i++)
        v[i]=v[i-1]+v[i-2];

    for(int i=0;i<n;++i)
        cout<<v[i]<<" ";

    return 0;
}
int main(){
    int n;
    cin >> n;
    fibonacci_printer(n);
    return 0;
}