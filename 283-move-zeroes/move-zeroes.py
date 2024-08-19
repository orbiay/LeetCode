class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        i,j,n = 0, 1,len(nums)
        while j < n:
            # if (nums[j] == 0):
            #     i = j
            #     j += 1
            if  nums[i] == 0 and nums[j] != 0:
                nums[i] = nums[j]
                nums[j] = 0
                i += 1
                j += 1
            else:
                if (nums[i] != 0 and  nums[j] == 0):
                     i = j
                j += 1

[1,0,1]
i = 0
j = 1