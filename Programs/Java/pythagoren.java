// Question
// 1. You are required to check if a given set of numbers is a valid pythagorean triplet.
// 2. Take as input three numbers a, b and c.
// 3. Print true if they can form a pythagorean triplet and false otherwise.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code here  
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
    
        if ( Math.pow(a,2) + Math.pow(b,2) == Math.pow(c,2) ) {
            System.out.println("true");
        } else if ( Math.pow(a,2) + Math.pow(c,2) == Math.pow(b,2) ) {
            System.out.println("true");
        } else if ( Math.pow(c,2) + Math.pow(b,2) == Math.pow(a,2) ) {
            System.out.println("true");
        } else 
            System.out.println("false");
    }
}