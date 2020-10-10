// 1	
// 1	1	
// 1	2	1	
// 1	3	3	1	
// 1	4	6	4	1	

import java.util.*;
public class Main {
    
    static int fact(int n ){
        int f ;
        for(f = 1 ; n > 1 ; n --) {
            f*=n;
        }
        return f;
    }
    
    static int ncr(int n, int r) {
        return (fact(n) / (fact(n - r) * fact(r)));
    }
    
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++)
                System.out.print(ncr(i, j) + "\t");
            System.out.println();
        }
        
    }
}