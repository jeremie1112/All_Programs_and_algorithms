import java.util.*;

class CountingSort {
    public static void main(String args[]){

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the Array Elements: ");
        for(int i = 0 ; i < n ; i++){
            arr[i] = sc.nextInt();
        }
        int max = arr[0];
        for(int i = 0 ; i< arr.length ; i++){
            if(max < arr[i])
                max = arr[i];
        }
        int outputarr[] = new int[arr.length+1];
        int countarr[] = new int[max+1];
        for (int i = 0; i < max; ++i) {
            countarr[i] = 0;
        }
        for (int i = 0; i < arr.length; i++) {
            countarr[arr[i]]++;
        }
        for (int i = 1; i <= max; i++) {
            countarr[i] += countarr[i - 1];
        }
        for (int i = arr.length - 1; i >= 0; i--) {
          outputarr[countarr[arr[i]] - 1] = arr[i];
          countarr[arr[i]]--;
        }
        for (int i = 0; i < arr.length; i++) {
          arr[i] = outputarr[i];
        }
        System.out.println("Sorted Array in ascending order");
        for(int a : arr){
            System.out.print(a + " ");
        }
    }
}