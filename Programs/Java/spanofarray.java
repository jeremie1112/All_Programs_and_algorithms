// Question
// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.

import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int arr[] = new int[n];
    
    for(int i = 0 ; i <n ; i++) {
        arr[i] = sc.nextInt();    
    }
    
    int max = arr[0];
    int min = arr[0];
    
    for(int j = 0 ; j < n ; j++) {
        if(arr[j] > max) {
            max=arr[j];
        }
        if(arr[j] < min) {
            min = arr[j];
        }
    }
    System.out.println(max-min);
 }

}