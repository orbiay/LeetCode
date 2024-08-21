class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        ret = 0
        maxval = -1
        for i in range(len(s)):
            if (s[i] in "aeiou"):
                ret += 1
            if i >= k - 1 :
                maxval = max(maxval,ret)
                if s[i - (k - 1)] in "aeiou":
                    ret -= 1
        return maxval