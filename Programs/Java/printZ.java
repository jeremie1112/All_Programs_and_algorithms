// Question
// 1. You are required to print a 'z' of size 5 using '*'.

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // Write your code here
       for(int i = 0 ; i < 5 ; i ++){
        for(int j = 0 ; j < 5 ; j ++){
           if(i == 0 || i==4 || j==4-i)
               System.out.print("*");
           else 
                System.out.print(" ");
        }   
        System.out.println();
       }
    }
}