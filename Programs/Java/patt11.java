// 1	
// 2	3	
// 4	5	6	
// 7	8	9	10	
// 11	12	13	14	15	

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int num = 1;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j<i ; j++){
                System.out.print(num+"\t");
                num++;
            }
            System.out.println();
        }

    }
}