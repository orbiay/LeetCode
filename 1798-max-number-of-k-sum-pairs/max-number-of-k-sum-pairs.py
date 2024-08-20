class Solution(object):
    def maxOperations(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        op = 0
        dics = {}
        for n in nums:
            if n in dics:
                dics[n] += 1
            else:
                dics[n] = 1
        for n in nums:
            target = k - n
            if target in dics and dics[target] > 0:
                if (target == n and dics[n] > 1) or (target != n and dics[n] > 0):
                    dics[n] -= 1
                    dics[target] -= 1
                    op += 1
        return op
