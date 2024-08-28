class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        hash = {}
        liss = []
        for i,n in enumerate(nums):
            if n in hash:
                hash[n] += 1
            else:
                hash[n] = 1
        for key in hash:
            if (hash[key] == 1):
                return key
        return 0

        
            