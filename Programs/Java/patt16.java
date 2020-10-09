// 1												1	
// 1	2										2	1	
// 1	2	3								3	2	1	
// 1	2	3	4						4	3	2	1	
// 1	2	3	4	5				5	4	3	2	1	
// 1	2	3	4	5	6		6	5	4	3	2	1	
// 1	2	3	4	5	6	7	6	5	4	3	2	1	

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int sp = 2 * n - 3;
        int st = 1;

        for (int i = 1; i <= n; i++) {
            int v = 1;
            for (int j = 1; j <= st; j++) {
                System.out.print(v + "\t");
                v++;
            }
            for (int j = 1; j <= sp; j++) {
                System.out.print("\t");
            }
            if (i == n) {
                st--;
                v--;
            }
            for (int j = 1; j <= st; j++) {
                v--;
                System.out.print(v + "\t");
            }

            sp -= 2;
            st++;

            System.out.println();
        }
    }
}