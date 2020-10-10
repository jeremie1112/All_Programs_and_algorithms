// Question
// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.

// Asssumption - Array is sorted. Array may have duplicate values.

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int d = sc.nextInt();

        int l = 0;
        int h = n - 1;
        int fi = -1;

        while (l <= h) {
            int m  = (l+h)/2;
            
            if(d > a[m]) {
                l = m + 1;
            } else if(d < a[m]) {
                h =  m - 1; 
            } else {
                fi = m;
                h = m - 1;
            }
        }
        System.out.println(fi);
        
        l = 0;
        h = n - 1;
        int li = -1;

        while (l <= h) {
            int m  = (l+h)/2;
            
            if(d > a[m]) {
                l = m + 1;
            } else if(d < a[m]) {
                h =  m - 1; 
            } else {
                li = m;
                l = m + 1;
            }
        }
        System.out.println(li);
    }
}