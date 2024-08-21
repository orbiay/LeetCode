class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        maxval = -1
        currentVal = 0
        slow , fast = 0 ,0
        count = 0
        n = len(nums)
        if n <= k:
            return n
        if 1 not in nums:
            return 0
        while fast < n:
            if nums[fast] == 0:
                count += 1
            if (count > k):
                if nums[slow] == 0:
                    count -= 1
                slow += 1
            else:
                maxval = max(maxval,fast - slow + 1)
            fast += 1
        return maxval
