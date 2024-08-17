class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        max = -1
        for n in candies:
            if (n > max):
                max = n
        res = []
        for n in candies:
            if(max <= n + extraCandies):
                res.append(True)
            else:
                res.append(False)
        return res
