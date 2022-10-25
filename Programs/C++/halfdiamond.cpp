// C++ implementation to print the
// half diamond star pattern

#include <iostream>

using namespace std;

// Function to print the
// half diamond star pattern
void halfDiamondStar(int N)
{
	int i, j;

	// Loop to print the upper half
	// diamond pattern
	for (i = 0; i < N; i++) {
		for (j = 0; j < i + 1; j++)
			cout << "*";
		cout << "\n";
	}

	// Loop to print the lower half
	// diamond pattern
	for (i = 1; i < N; i++) {
		for (j = i; j < N; j++)
			cout << "*";
		cout << "\n";
	}
}

// Driver Code
int main()
{
	int N = 5;

	// Function Call
	halfDiamondStar(N);
}
