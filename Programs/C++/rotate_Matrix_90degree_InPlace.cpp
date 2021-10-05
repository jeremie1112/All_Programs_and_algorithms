#include <bits/stdc++.h>
using namespace std;
 
 
// Transpose and reverse matrix results in Rotated matrix
// First swap matrix elements over diagonal 
// then swap elements over middle column
void rotate90DegreeClockwise(int arr[N][N])
{
   for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
     
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N / 2; ++j)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][N - j - 1];
            arr[i][N - j - 1] = temp;
        }
    }
}

int main()
{
    int arr[N][N] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
    rotate90DegreeClockwise(arr);
    return 0;
}
