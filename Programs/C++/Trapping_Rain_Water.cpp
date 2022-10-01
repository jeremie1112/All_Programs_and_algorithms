#include <bits/stdc++.h>
using namespace std;

int efficientRainWater(int height[], int n) {
    int water = 0, left[n], right[n];
    
	/*
	1. Get maximum element that is on the right of every element.
	2. Get maximum element that is on the left of every element.
	3. Since the extreme elements are not involved in storing water.
	4. From 1 to n-2, get the minimum of maximum's from left and right side.
	5. subtract the min from the current value and keep on adding throughout the array.
	*/
	
    left[0] = height[0];
    right[n-1] = height[n-1];
    
    // left array
    for(int i = 1; i < n;i++)
        left[i] = max(height[i], left[i-1]);
        
    for(int i = n-2; i > 0; i--)
        right[i] = max(height[i], right[i+1]);
        
    for(int i = 1; i < n-1; i++)
        water += min(left[i],right[i]) - height[i];
    
    return water;
}


int maxWater(int height[], int n)
{
	
	stack <int> st;
	int ans = 0;

	for(int i = 0; i < n; i++)
	{
		while ((!st.empty()) &&
			(height[st.top()] < height[i]))
		{
			int pop_height = height[st.top()];
			st.pop();

			// break if the stack does not have any bars or the popped bar has no left boundary
			if (st.empty())
				break;

			int distance = i - st.top() - 1;
			int min_height = min(height[st.top()],
								height[i]) -
							pop_height;

			ans += distance * min_height;
		}
		st.push(i);
	}
	return ans;
}

int main()
{

	int arr[] = { 0, 1, 0, 2};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << maxWater(arr, n);
	
	cout << efficientRainWater(arr, n) << endl;

	return 0;
}
