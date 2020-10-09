// Question
// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are given another number d.
// 4. You are required find the ceil and floor of d in the array a.

// Ceil is defined as value in array which is just greater than d. If an element equal to d exists that will be considered as ceil.
// Floor is defined as value in array which is just lesser than d. If an element equal to d exists that will be considered as floor.
// Asssumption - Array is sorted.

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
        int num = sc.nextInt();
        int l = 0;
        int h = n;
        int fl =0 ;
        int cl =0 ;
        while(l<=h){
            int m = (l+h)/2;
            if(num > a[m] ){
                l= m + 1;
                fl = a[m];
            } else if(num < a[m]){
                h = m - 1;
                cl = a[m];
            } else {
                cl = a[m];
                fl = a[m];
                break;
            }
        }
        System.out.println(cl);
        System.out.println(fl);
    }
}