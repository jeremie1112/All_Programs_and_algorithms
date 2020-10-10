// Question
// 1. You've to print first n fibonacci numbers.
// 2. Take as input "n", the count of fibonacci numbers to print.
// 3. Print first n fibonacci numbers.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int f1 = 0, f2 = 1, i;

        for (i = 1; i < n; i++) {
            if (i == 1)
                System.out.println(0);
            System.out.println(f2);
            int next = f1 + f2;
            f1 = f2;
            f2 = next;
        }

    }
}