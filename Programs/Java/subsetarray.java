// Question
// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to print all subsets of arr. Each subset should be
// on separate line. For more clarity check out sample input and output.

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

        int lim = (int)Math.pow(2, n);
        for (int i = 0; i < lim; i++) {
            int t = i;
            String ans = "";
            for (int j = a.length - 1; j >= 0; j--) {
                int r = t % 2;
                t = t / 2;

                if (r == 0) {
                    ans = "-\t" + ans;
                } else {
                    ans = a[j] + "\t" + ans;
                }
            }
            System.out.println(ans);
        }
    }

}