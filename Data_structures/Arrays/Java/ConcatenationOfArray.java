import java.util.*;

public class ConcatenationOfArray {
    public static int[] getConcatenation(int[] nums) {
        int ans_size=(nums.length)*2;
        int[] ans = new int[ans_size];
        for(int i=0; i<nums.length; i++){
            ans[i]=nums[i];
            ans[nums.length+i]=nums[i];
        }
        return ans;
    }
    public static void main(String[] args)   
    {     
        int n;  
        Scanner sc=new Scanner(System.in);  
        System.out.print("Enter the number of elements: ");   
        n=sc.nextInt();  

        int[] array = new int[n];  
        System.out.println("Enter the elements of the array: ");  
        for(int i=0; i<n; i++)
        {    
            array[i]=sc.nextInt();  
        }
        sc.close();
        int[] result =getConcatenation(array);
        for(int i:result)
        {
            System.out.print(i+" ");
            
        }
 
    }
}
