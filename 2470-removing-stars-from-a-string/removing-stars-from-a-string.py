class Solution(object):
    def removeStars(self, s):
        """
        :type s: str
        :rtype: str
        """
        stack = []
        # n = len(s)
        # i = n - 1
        # while i >= 0:
        #     stack.append(s[i])
        #     i -= 1
        # i = 0
        # ret = ""
        # while i < n:
        #     char = stack.pop()
        #     if (char == "*" and ret != ""):
        #         ret = ret[:-1]
        #     else:
        #         ret += char 
        #     i += 1
        for n in s:
            if n != '*':
                stack.append(n)
            else:
                stack.pop()
        return ''.join(stack)
