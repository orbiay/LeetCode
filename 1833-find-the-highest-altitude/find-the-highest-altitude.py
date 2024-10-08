class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        i = 1
        maxVal = 0
        maxVal = max(maxVal,gain[0])
        n = len(gain)
        while i < n:
            gain[i] = gain[i - 1] + gain[i]
            maxVal = max(maxVal,gain[i])
            i += 1
        return maxVal

