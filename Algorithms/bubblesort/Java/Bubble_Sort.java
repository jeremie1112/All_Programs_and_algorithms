
public class Bubble_Sort {
        public static void main (String[] args) {
            int a[] = {2, 7, 5, 4, 3};

            int t = 0;

            int n = a.length;

            for (int i = 0; i < n - 1; i++) {

                for (int j = 0; j < n - 1 - i; j++) {   //for (int j=0; j<n-1-i; j++)  -- For more efficiency that is it'll not check last element.

                    if (a[j] > a[j + 1]) {

                        t = a[j + 1];
                        a[j + 1] = a[j];
                        a[j] = t;

                    }
                }
            }
            for (int item : a) {
                System.out.print(item + " ");
            }
        }

}
