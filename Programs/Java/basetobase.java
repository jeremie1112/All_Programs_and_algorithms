// Question
// 1. You are given a number n.
// 2. You are given a base b1. n is a number on base b.
// 3. You are given another base b2.
// 4. You are required to convert the number n of base b1 to a number in base b2.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int sourceBase = scn.nextInt();
        int destBase = scn.nextInt();
       

        int p =1;
        int p1=1;
        int r =0 ;
        // n1=n;
        int r1 = 0;

        while (n != 0) {
            int d1 = n%10;
            n = n / 10;
            r += d1*p;
            p = p*sourceBase;
        }
        while (r!=0){
            int d2 = r%destBase;
            r = r / destBase ;
            r1 += d2*p1;
            p1*=10;
        }
        System.out.println(r1);
    }
}