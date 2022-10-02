#include<bits/stdc++.h>
using namespace std;

/*
	1. Get maximum element that is on the right of every element.
	2. Get maximum element that is on the left of every element.
	3. Since the extreme elements are not involved in storing water.
	4. From 1 to n-2, get the minimum of maximum's from left and right side.
	5. subtract the min from the current value and keep on adding throughout the array.
*/

int rainWater(int height[], int n) {
    int water = 0, left[n], right[n];
    
    left[0] = height[0];
    right[n-1] = height[n-1];
    
    // left array
    for(int i = 1; i < n;i++)
        left[i] = max(height[i], left[i-1]);
    
    // right array
    for(int i = n-2; i > 0; i--)
        right[i] = max(height[i], right[i+1]);
    
    
    for(int i = 1; i < n-1; i++)
        water += min(left[i],right[i]) - height[i];
    
    return water;
}

int main() {
    
    int n;
    cin >> n;
    
    int height[n];
    
    for(int i = 0; i < n; i++)
        cin >> height[i];
    
    cout << rainWater(height, n) << endl;
    
    return 0;
}