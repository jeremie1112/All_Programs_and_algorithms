package Algorithms.Longest_Increasing_Subsequence;
import java.util.*;
public class Longest_Subsequence {
    /**
     * LongestIncreasingSubsequence class computes the length of the longest increasing subsequence
     * in an array using dynamic programming and binary search.
     *
     * @author Yash Kesharwani
     */
        /**
         * Calculates the length of the longest increasing subsequence in the given array.
         *
         * @param nums An array of integers.
         * @return The length of the longest increasing subsequence.
         */
        public int lengthOfLIS(int[] nums) {
            // Create a list to store the increasing subsequence.
            List<Integer> size = new ArrayList<>();
            size.add(nums[0]);

            // Iterate through the array.
            for (int i = 1; i < nums.length; i++) {
                int num = nums[i];

                // Check if the current number is greater than the last number in the subsequence.
                if (num > size.get(size.size() - 1)) {
                    size.add(num);
                } else {
                    // If not, find the appropriate position for the current number using binary search.
                    int j = binary(size, num);
                    size.set(j, num);
                }
            }

            // The size of the list represents the length of the longest increasing subsequence.
            return size.size();
        }

        /**
         * Binary search helper method to find the appropriate position for the current number in the subsequence.
         *
         * @param size A list representing the increasing subsequence.
         * @param num  The number to insert into the subsequence.
         * @return The index where the number should be inserted.
         */
        public int binary(List<Integer> size, int num) {
            int low = 0;
            int high = size.size() - 1;

            while (low < high) {
                int mid = low + (high - low) / 2;

                if (size.get(mid) == num) {
                    return mid;
                } else if (size.get(mid) < num) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }

            return low;
        }

        public static void main(String[] args) {
            // Example usage:
            int[] nums = {10, 22, 9, 33, 21, 50, 41, 60, 80};
            Longest_Subsequence lis = new Longest_Subsequence();
            int result = lis.lengthOfLIS(nums);
            System.out.println("Length of the Longest Increasing Subsequence: " + result);
        }
    }


