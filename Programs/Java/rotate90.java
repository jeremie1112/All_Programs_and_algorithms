// Question
// 1. You are given a number n, representing the number of rows and number of columns.
// 2. You are given n*n numbers, representing elements of 2d array a.
// 3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
// *Note - you are required to do it in-place i.e. no extra space should be used to achieve it .*

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner s = new Scanner(System.in);
        int r = s.nextInt();
        int a[][] = new int[r][r];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < r; j++) {
                a[i][j] = s.nextInt();
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = i; j < r; j++) {
                int t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }

        for (int i = 0; i < r; i++) {
            int l = 0;
            int ri = a[i].length - 1;
            
            while (l < ri) {
                int t = a[i][l];
                a[i][l] = a[i][ri];
                a[i][ri] = t;
                
                l++;
                ri--;
            }
        }

        display(a);
    }

    public static void display(int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[0].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

}