#include<stdio.h>

int KadaneAlgo(int arr[], int len){
	if(len == 0)	return 0;
	int i, Max_curr = arr[0], Max_sum = arr[0];
	for(i = 1; i < len; i++){
		if(Max_curr + arr[i] > arr[i])
			Max_curr += arr[i];
		else
			Max_curr = arr[i];
		if(Max_sum < Max_curr)
			Max_sum = Max_curr;
	}
	return Max_sum;
}

int main(){
	int len, i;
	printf("Enter the length of integer array : ");
	scanf("%d",&len);
	if(len<0){
		printf("Invalid entry");
	}
	else{
		if(len == 0)
			printf("Maximum subarray sum = 0");
		else{
			int arr[len];
			printf("Enter the array : ");
			for(i = 0; i < len; i++){
				scanf("%d",&arr[i]);
			}
			i = KadaneAlgo(arr,len);
			printf("Maximum subarray sum = %d",i);
		}
	}
	return 0;
}