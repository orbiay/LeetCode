class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        n = len(nums)
        maxval = float('-inf')
        currentMax = float(0)
        for i in range(n):
            currentMax += nums[i]
            if i >= k - 1:
                maxval = max(maxval,currentMax)
                currentMax  -= nums[i - (k - 1)]

        
        return maxval / k

        