class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sumofarr = sum(nums)
        n = len(nums)
        i , j  = 0,1
        sumofarr -= nums[0]
        prevsum = 0
        prevsum += nums[0]
        if sumofarr == 0:
            return 0
        while j < n:
            sumofarr -= nums[j]
            if sumofarr == prevsum:
                return j
            prevsum += nums[j]
            j += 1
        return -1
            

