class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if s == "":
            return 1
        i,j,n,lens = 0,0,len(s),len(t)
        while j < lens and i < n:
            if s[i] == t[j]:
                i += 1
                j += 1
            else:
                j += 1
        if i != n:
            return False
        return True
        
        