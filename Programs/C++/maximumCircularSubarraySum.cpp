#include<bits/stdc++.h>
using namespace std;

// Get minimum normal subarray sum and then subtract with whole sum and return maximum of those

int noramalMaxSum(int arr[], int n) {
    int res = arr[0], maxEnding = arr[0];
    for(int i = 1; i < n; i++) {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(maxEnding, res);
    }
    
    return res;
}

int maxCircularSumGFG(int arr[], int n) {
    int max_normal = noramalMaxSum(arr,n);
    
    if(max_normal < 0) {
        return max_normal;
    }
    
    int arr_sum = 0;
    for(int i = 0; i < n;i++) {
        arr_sum += arr[i];
        arr[i] = -1*arr[i];
    }
    
    int max_circular = arr_sum + noramalMaxSum(arr,n);
    
    return max(max_circular, max_normal);
}

int maxCircularSum(int arr[], int n) {
    int totalSum = 0;
    for(int i = 0; i < n;i++)
        totalSum += arr[i];
    
    // minimum normal subarray sum
    
    int normalSum = arr[0], sum = arr[0];
    for(int i = 1;i < n; i++) {
        sum = min(sum + arr[i], arr[i]);
        normalSum = min(normalSum, sum);
    }
    
    return max(normalSum, totalSum - normalSum);
}

int main() {
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << maxCircularSum(arr,n) << endl;
    
    return 0;
}