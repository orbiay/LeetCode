class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        sp = s.split()
        size = len(sp)
        ret = ""
        while (size > 0):
            print(sp[size - 1])
            ret += sp[size - 1]
            size -= 1
            if (size > 0):
                ret += " "
        return ret
            
        