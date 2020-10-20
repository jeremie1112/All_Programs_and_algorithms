import java.io.*;
import java.util.Scanner; 
class SelectionSort 
{ 
     // Inputs values in the array 
    void input(int arr[]) 
    { 
        int n = arr.length;
        Scanner sc=new Scanner(System.in);
        for (int i=0; i<n; ++i) 
            arr[i]=sc.nextInt();
    } 
  
    void sort(int arr[]) 
    { 
        int n = arr.length; 
  
        // One by one move boundary of unsorted subarray 
        for (int i = 0; i < n-1; i++) 
        { 
            // Find the minimum element in unsorted array 
            int min_idx = i; 
            for (int j = i+1; j < n; j++) 
                if (arr[j] < arr[min_idx]) 
                    min_idx = j; 
  
            // Swap the found minimum element with the first 
            // element 
            int temp = arr[min_idx]; 
            arr[min_idx] = arr[i]; 
            arr[i] = temp; 
        } 
    } 
  
    // Prints the array 
    void printArray(int arr[]) 
    { 
        int n = arr.length; 
        for (int i=0; i<n; ++i) 
            System.out.print(arr[i]+" "); 
        System.out.println(); 
    } 
  
    // Driver code to test above 
    public static void main(String args[]) 
    { 
        SelectionSort ob = new SelectionSort();
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("Enter the number of array elements");
        n=sc.nextInt();
        int ar[];
        ar= new int[n];
        ob.input(ar); 
        System.out.println("Original array"); 
        ob.printArray(ar); 
        ob.sort(ar); 
        System.out.println("Sorted array"); 
        ob.printArray(ar); 
    } 
} 
/* This code is contributed by Esha Sherring*/
