// Question
// 1. You are given a number n.
// 2. You are given a digit d.
// 3. You are required to calculate the frequency of digit d in number n.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d) {
        // write code here
        String s = Integer.toString(n);
        int len = s.length();
        int l = len;
        int arr[] = new int[len];
        for(int i = 0 ; i < len ; i++) {
            int r = n%10;
            arr[l-1] = r;
            l=l-1;
            n=n/10;
        }
        
        int count = 0 ;
        for(int i = 0 ; i < len ; i++) {
            if(arr[i] == d)
                count++;
        }
        return count;
    }
}