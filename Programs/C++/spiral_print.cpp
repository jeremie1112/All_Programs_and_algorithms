#include <iostream>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;
    int arr[m][n];
    int val = 1;

    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            arr[row][col] = val;
            val++;
        }
    }

    int sr = 0;
    int sc = 0;
    int er = m-1;
    int ec = n-1;

    while(sr<=er && sc<=ec){

        // start row
        for(int i=sc; i<=ec; i++){
            cout << arr[sr][i] << ", ";
        }

        sr++;

        // end column
        if(sc<ec){

            for(int i=sr; i<=er; i++){
            cout << arr[i][ec] << ", ";
            }
            ec--;
        }

        // end row
        if(sr<er){

            for(int i=ec; i>=sc; i--){
            cout << arr[er][i] << ", ";
            }
            er--;
        }

        // start column
        for(int i=er; i>=sr; i--){
            cout << arr[i][sc] << ", ";
        }

        sc++;

    }

    return 0;
}
