#include <iostream>

using namespace std;

bool search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	cout << "Enter length of Array: ";
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter Array Elements:\n";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter Element to Search: ";
	int x;
	cin >> x;
	cout << search(arr, n, x) << "\n";
	return 0;
}