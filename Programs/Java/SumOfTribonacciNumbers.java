
//Code by : https://github.com/MaxTronn

/* Question - Find the sum of tribonacci numbers from the
 range m to n. 
 
 A tribonacci number is a number that is the sum of previous 3 numbers in the series 
 (Similar to fibonacci numbers). The first, second and third tribonacci numbers are 1, 1 and 1.
 
More formally you are given two numbers m and n and you need to find the sum of tribonacci numbers
from m to n that is f(m) + f(m+1) + f(m+2) . . . . . . . . . f(n) where f(i) denotes the ith tribonacci 
number.

***INPUT***
The first line of input contains t denoting the number of test cases. Then t test cases follows containing
m and n where m<=n

***OUTPUT***
For each test case print a single line denoting the sum of tribonacci number from m to n

***EXAMPLE INPUT***
5
2 8
5 6
3 3
9 11
1 10


***EXAMPLE OUTPUT***
67
14
1
355
230

*/

import java.util.Scanner;

public class SumOfTribonacciNumbers {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while (t > 0) {
			int n1 = sc.nextInt();
			int n2 = sc.nextInt();
			int sum = 0;
			for (int i = n1; i <= n2; i++)
				sum += Tribonacci(i);
			System.out.println(sum);
			t--;
		}

	}

	public static int Tribonacci(int n) {
		if (n <= 0)
			return 0;
		else if (n == 1 || n == 2 || n == 3)
			return 1;
		else
			return Tribonacci(n - 1) + Tribonacci(n - 2) + Tribonacci(n - 3);
	}

}
