class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        hash = {}
        key = 0
        liss = []
        for i,n in enumerate(nums):
            if n in hash:
                hash[n] += 1
            else:
                hash[n] = 1
            if hash[n] == 1 and n not in nums[i + 1:]:
                key = n
        return key

        
            