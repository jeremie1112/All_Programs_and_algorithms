// Question
// 1. You are given two numbers n and k. You are required to rotate n, k times to the right. 
// If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. 
// Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
// 2. Take as input n and k.
// 3. Print the rotated number.
// 4. Note - Assume that the number of rotations will not cause leading 0's in the result. 
// e.g. such an input will not be given
//    n = 12340056
//    k = 3
//    r = 05612340

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code here  
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        String s = Integer.toString(n);
        int len = s.length();

        k = k % len;
        if (k < 0) {
            k = len + k;
        }

        int div = 1, mul = 1;
        for (int i = 1; i <= len; i++) {
            if (i <= k) {
                div = div * 10;
            } else {
                mul = mul * 10;
            }

        }
        int q = n / div;
        int r = n % div;

        int rot = r * mul + q;
        System.out.println(rot);
    }
}