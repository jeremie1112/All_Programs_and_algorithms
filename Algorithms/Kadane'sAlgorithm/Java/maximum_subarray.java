/**
 * maxSumSubArray
 */
//Time Complexity is O(n^3)
//This questions optimized solution is Prifix Sum Approch
public class maxSumSubArray {
    public static int maxSum(int arr[]){
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += arr[k];
                    System.out.print(arr[k] + " ");
                }
                if (sum>max) {
                    max = sum;
                }
                System.out.print("\nSum of sub Array is " + sum);
                System.out.println();
            }
            System.out.println();
        }
        return max;
    }
    public static void main(String[] args) {
        int array[] = {1,3,-5,1,4};
        int max = maxSum(array);
        System.out.println("\nMax Sum of Sub array is " + max);
    }
}
