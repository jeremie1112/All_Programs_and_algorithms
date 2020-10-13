import java.util.Scanner;

public class CodeJam_missing4 {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int line = 1;
        scanner.nextLine();
        while (scanner.hasNext()) {
            int N = scanner.nextInt();
            System.out.print("CASE #" + (line++) + ": ");

            String x = String.valueOf(N);
            String alt = "";
            for (int i = 0; i < x.length(); i++) {
                int t = Integer.parseInt(String.valueOf(x.charAt(i)));
                if (t == 4) {
                    alt += "2";
                }else{
                    alt += "0";
                }
            }
            int altnum = Integer.parseInt(alt);
            System.out.println(altnum + " " + (N-altnum));
        }
    }
}
