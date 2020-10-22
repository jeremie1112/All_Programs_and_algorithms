#include<bits/stdc++.h>
using namespace std;

int KadaneAlgo(const vector<int> &arr){
	int len = arr.size();
	if(len == 0) return 0;
	int i, Max_curr = arr[0], Max_sum = arr[0];
	for(i = 1; i < len; i++){
		Max_cur = max(Max_curr + arr[i], arr[i]);
		if(Max_sum < Max_curr)
			Max_sum = Max_curr;
	}
	return Max_sum;
}

int main(){
	int len, i;
	cout<<"Enter the length of integer array : ";
	cin>>len;
	if(len<0){
		cout<<"Invalid entry";
	}
	else{
		if(len == 0)
			cout<<"Maximum subarray sum = 0";
		else{
			vector<int> arr(len);
			cout<<"Enter the array : ";
			for(i = 0; i < len; i++){
				cin>>arr[i];
			}
			cout<<"Maximum subarray sum = "<<KadaneAlgo(arr);
		}
	}
	return 0;
}
