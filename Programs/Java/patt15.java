// 			1	
// 		2	3	2	
// 3	4	5	4	3	
// 		2	3	2	
// 			1	

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int sp  = n/2;
        int num = 1;
        int pr = 1;
        for (int i = 1 ; i <= n ; i ++){
            for(int j = 1 ; j <= sp ; j++ ){
                System.out.print("\t");
            }
            int pri = pr;
            for(int j = 1 ; j <= num ; j++){
                System.out.print(pri+"\t");
                if(j>=1 && j<=num/2){
                    pri++;
                } else {
                    pri--;
                }
            }
            if(i <= n/2){
                sp--;
                num+=2;
                pr++;
            }else {
                sp++;
                num-=2;
                pr--;
            }
            System.out.println();
        }

    }
}