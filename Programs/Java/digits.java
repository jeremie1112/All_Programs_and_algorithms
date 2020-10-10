// Question
// 1. You've to display the digits of a number.
// 2. Take as input "n", the number for which digits have to be displayed.
// 3. Print the digits of the number line-wise.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code here 
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        printDigit(n);
    }

    static void printDigit(int N) {
        int r;
        if (N == 0) {
            return ;
        }
        r = N % 10;
        printDigit(N / 10);
        System.out.println(r);
    }
}