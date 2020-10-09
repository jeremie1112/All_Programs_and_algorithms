// 0	
// 1	1	
// 2	3	5	
// 8	13	21	34	
// 55	89	144	233	377	

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int a = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(fibbo(a) + "\t");
                a++;
            }
            System.out.println();
        }

    }

    static int fibbo(int a) {
        if (a == 0)
            return 0;
        if (a == 1)
            return 1;
        else
            return fibbo(a - 1) + fibbo(a - 2);
    }
}
