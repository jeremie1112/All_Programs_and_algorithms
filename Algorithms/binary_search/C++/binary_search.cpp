#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& v, int x)
{
    int n = v.size();
    int l = 0,r = n - 1;
    while( l <= r )
    {
        int mid  = (l+r)/2;
        // case 1 :
        if(v[mid] == x) return mid;
        // case 2 :
        else if(v[mid] > x ) r = mid - 1;
        // case 3 :
        else l = mid + 1;
    }
    return -1;
}
int main()
{
    vector<int> v {1,2,3,4,5,6,7,8,9};
    
    if(binarySearch(v , 7) != -1)
        cout<<"the element is present\n";
    else
        cout<<"the element is NOT present\n";
    
}
