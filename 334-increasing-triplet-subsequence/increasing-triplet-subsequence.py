class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        min = float('inf')
        mid = float('inf')
        for n in nums:
            if min >= n:
                min = n
            elif mid >= n:
                mid = n
            else:
                return True
            print(min,mid)
        return False

