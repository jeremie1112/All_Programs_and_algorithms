#include <bits/stdc++.h>
using namespace std;

// k = max-min
// Time complexity  =>O(n+k)
// Space complexity =>O(k)

void printArray(int arr[],int n)
{
	for(int i = 0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void countSort(int arr[],int size)
{
	// max-element
	int max = arr[0];
	for(int i = 1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}

	// Create frequency array and initialize with zeroes
	int frequency_array[max+1];
	for(int i =0;i<=max;i++)
	{
		frequency_array[i]=0;
	}

	// setting number of occurrences
	for(int i=0;i<size;i++)
	{
		frequency_array[arr[i]]++;
	}

	// printArray(frequency_array,max+1);
	// prefix sum array 
	for(int i =1;i<max;i++)
	{
		frequency_array[i]=frequency_array[i]+frequency_array[i-1];
	}


	// creating a shifted array 
	int shifted_array[max+1];
	shifted_array[0] = 0;
	for(int i=1;i<=max;i++)
	{
		shifted_array[i] = frequency_array[i-1];
	}

	// output
	int output[size];
	for(int i = 0;i<size;i++)
	{
		output[shifted_array[arr[i]]]=arr[i];
		shifted_array[arr[i]]++;
	}

	printArray(output,size);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	countSort(arr,n);

	return 0;
}