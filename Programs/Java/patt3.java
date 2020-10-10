// 					*	
// 				*	*	
// 			*	*	*	
// 		*	*	*	*	
// *	*	*	*	*	

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
        int n = scn.nextInt();
        int spaces = n ;

        while (spaces != 0) {
            for (int i = 1; i <= spaces -1; i++) {
                System.out.print("\t");
            }
            for (int j = 1; j <= n - spaces +1; j++) {
                System.out.print("*\t");
            }
            System.out.println();
            spaces--;
        }
    }
}