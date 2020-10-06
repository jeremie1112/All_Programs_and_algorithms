public class maximum_subarray {
    public static int max_contagious_subarray_sum(int[] arr){
        int maximum_so_far=arr[0];
        int maximum_ending_here=arr[0];
        for(int i=1;i<arr.length;i++){
            maximum_so_far=Math.max(arr[i], maximum_so_far+arr[i]);
            if(maximum_so_far>maximum_ending_here){
                maximum_ending_here=maximum_so_far;
            }
        }
        return maximum_ending_here;
    }

    public static void main(String[] args) {
        int[] arr= {-2, -3, 4, -1, -2, 1, 5, -3};
        int max_cont_sub_sum=max_contagious_subarray_sum(arr);
        System.out.println(max_cont_sub_sum);  
    }
}
