class Solution(object):
    def removeStars(self, s):
        """
        :type s: str
        :rtype: str
        """
        stack = []
        i = len(s) - 1
        while i >= 0:
            stack.append(s[i])
            i -= 1
        i = 0
        ret = ""
        while i < len(s):
            char = stack.pop()
            if (char == "*" and ret != ""):
                ret = ret[:-1]
            else:
                ret += char 
            i += 1
        return ret
