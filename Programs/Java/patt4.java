// *	*	*	*	*	
// 		*	*	*	*	
// 			*	*	*	
// 				*	*	
// 					*

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int spaces = 0 ;
        int star = n;

        for(int k = 1 ; k <= n ; k++ ) {
            for (int i = 1; i <= spaces ; i++) {
                System.out.print("\t");
            }
            for (int j = 1 ; j <= star ; j++) {
                System.out.print("*\t");
            }
            spaces++;
            star--;
            System.out.println();
        }
    }
}