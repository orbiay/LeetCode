class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        m = max(candies)
        res = []
        for n in candies:
            if(m <= n + extraCandies):
                res.append(True)
            else:
                res.append(False)
        return res
