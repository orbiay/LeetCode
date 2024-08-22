class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """
        num1 = {}
        num2 = {}
        ret1 =[]
        ret2 = []
        for n in nums1:
            num1[n] = 1
        for n in nums2:
            num2[n] = 1
            if n not in num1 and n not in ret1:
                ret1.append(n)
        for n in nums1:
            if n not in num2 and n not in ret2:
                ret2.append(n)
        return [ret2,ret1]
