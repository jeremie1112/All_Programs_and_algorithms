// Question
// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a.
// 4. You are required to display the contents of 2d array as suggested by output format below.

// 11 12 13 14
// 21 22 23 24

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int cols = sc.nextInt(); 
        int a[][] = new int[rows][cols];
        
        for(int i = 0 ; i < rows ; i++){
            for(int j =0 ; j < cols ; j++){
                a[i][j] = sc.nextInt();
            }
        }
        
        for(int i = 0 ; i < rows ; i++){
            for(int j =0 ; j < cols ; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }

}