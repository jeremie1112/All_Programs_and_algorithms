import java.util.*;

public class HashingMain {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		System.out.println("Input n:"); //no. of lines
		int n = s.nextInt();
		
		String [] lines = new String[n]; //lines
		
		System.out.println("Input the lines:"); //no. of lines
		for (int i=0; i<n; i++) {
			lines[i] = s.nextLine(); //input the lines to the system
			String dummy = s.nextLine();
		}
		
		String username = null;
		
		System.out.println("enter a username:");
		while (username.equals("exit")) {
			username = s.nextLine();
			
		}
	}

}
