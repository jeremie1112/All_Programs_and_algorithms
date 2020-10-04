#include<bits/stdc++.h>
using namespace std;

void heapifymax(int *a, int n, int root)
{
	int key = root, l = 2*root + 1, r = 2*root + 2;
	if(l<n && a[l]>a[key]) key = l;
	if(r<n && a[r]>a[key]) key = r;
	if(key != root)
	{
		
		swap(a[root], a[key]);
		heapifymax(a, n, key);
	}
}

void heapsort(int *a, int n)
{
	for(int i = (n-2)/2; i>=0; i--)
	{
		heapifymax(a, n, i);
	}
	for(int i = n-1; i>=0; i--)
	{
		swap(a[i], a[0]);
		heapifymax(a, i, 0);
	}
}

void printheap(int *a, int n)
{
	for(int i = 0; i<n; i++) cout<<a[i]<<" ";
	cout<<endl;
}

int main()
{
    int n; cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    heapsort(a, n);
    printheap(a, n);
}
