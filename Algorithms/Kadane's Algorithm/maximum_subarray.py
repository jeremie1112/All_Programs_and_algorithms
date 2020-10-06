''' 
Problem :Maximum Subarray
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
'''

import sys

def maxSubArray(nums):
        max_so_far = -(sys.maxsize)
        max_ending_so_far = 0 
        for i in range(len(nums)):
            max_ending_so_far += nums[i]
            if max_ending_so_far < nums[i]:
                max_ending_so_far = nums[i]
            if max_so_far < max_ending_so_far :
                max_so_far = max_ending_so_far
        return max_so_far

# Main Function
if __name__ == "__main__":
    nums =  [-2,1,-3,4,-1,2,1,-5,4] 
    ans = maxSubArray(nums)
    print(ans)

        