// Question
// 1. You are given a number n1, representing the number of rows of 1st matrix.
// 2. You are given a number m1, representing the number of columns of 1st matrix.
// 3. You are given n1*m1 numbers, representing elements of 2d array a1.
// 4. You are given a number n2, representing the number of rows of 2nd matrix.
// 5. You are given a number m2, representing the number of columns of 2nd matrix.
// 6. You are given n2*m2 numbers, representing elements of 2d array a2.
// 7. If the two arrays representing two matrices of dimensions n1 * m1 and n2 * m2 can be multiplied,
// display the contents of prd array as specified in output Format.
// 8. If the two arrays can't be multiplied, print "Invalid input".

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int m1 = sc.nextInt();
        int a[][] = new int[n1][m1];

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m1; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        int n2 = sc.nextInt();
        int m2 = sc.nextInt();
        int b[][] = new int[n2][m2];

        for (int i = 0; i < n2; i++) {
            for (int j = 0; j < m2; j++) {
                b[i][j] = sc.nextInt();
            }
        }

        int ans[][] = new int[n1][m2];

        if (n2 != m1)
            System.out.println("Invalid input");
        else {
            for (int i = 0; i < n1; i++) {
                for (int j = 0; j < m2; j++) {
                    //ans[i][j] = 0;
                    for (int k = 0; k < n2; k++) {
                        ans[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            for (int i = 0; i < n1; i++) {
                for (int j = 0; j < m2; j++) {
                    System.out.print(ans[i][j]+" ");
                }
                System.out.println();
            }
        }

    }

}