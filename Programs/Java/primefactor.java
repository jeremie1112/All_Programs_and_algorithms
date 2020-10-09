// Question
// 1. You are required to display the prime factorization of a number.
// 2. Take as input a number n.
// 3. Print all its prime factors from smallest to largest.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code here 
        int number;
        Scanner sc = new Scanner(System.in);
        number = sc.nextInt();

        for (int i = 2; i < number; i++) {
            while (number % i == 0) {
                System.out.print(i + " ");
                number = number / i;
            }
        }
        if (number > 2) {
            System.out.print(number);
        }
    }
}