#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int part (int a[], int low, int high)
{
	int pivot = a[high]; //pivot element
	int i = (low -1), j; // index of smaller element
	
	for (j = low; j<=high-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i+1], &a[high]);
	return (i+1);
}

void quickSort(int a[], int low, int high)
{
	if(low<high)
	{
		int pi = part(a, low, high);
		
		quickSort(a, low, pi-1);
		quickSort(a, pi+1, high);
	}
}

void printArray(int a[], int size) 
{ 
    
        cout<<a[size-1]<<endl; 
        cout<<a[size-2]<<endl; 
        cout<<a[size-3]<<endl; 
    
} 


int main()
{
	int n, arr[100], i;
	cout<<"Enter the size of the array:";
	cin>>n;
	
	for (i=0;i<n;i++)
	{
		cout<<"Enter the element "<<i+1<<endl;
		cin>>arr[i];
	}
      
	quickSort(arr, 0, n-1); 
	cout<<"Largest three elements:\n";
	 printArray(arr, n);
	return 0;
}
