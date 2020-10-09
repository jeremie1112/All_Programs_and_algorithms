// Question
// 1. You've to check whether a given number is prime or not.
// 2. Take a number "t" as input representing count of input numbers to be tested.
// 3. Take a number "n" as input "t" number of times.
// 4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        // write ur code here
        int t = scn.nextInt();
        int a;
        for (int i = 0; i < t; i++) {
            a = scn.nextInt();
            int count = 0;
            for (int div = 2; div * div <= a; div++) {
                if (a % div == 0)
                    count++;
            }
            if (count == 0)
                System.out.println("prime");
            else
                System.out.println("not prime");
        }
    }
}