// Question
// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a.
// 4. You are required to traverse and print the contents of the 2d array in form of a wave - down the first column then up the second column and so on.
// Note - Please check the output format for details.

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int a[][] = new int[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        int j = 0;
        for (int i = 0; i < m; i++) {
            if (i % 2 == 0) {
                if(j < 0 )
                    j++;
                while (j <= n - 1) {
                    System.out.println(a[j][i]);
                    j++;
                }
            } else {
                if (j > n-1)
                    j--;
                while (j >= 0) {
                    System.out.println(a[j][i]);
                    j--;
                }
            }
        }
    }
}