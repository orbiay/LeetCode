class Solution(object):
    def isVowel(self, c):  # Add 'self' as the first parameter
        if c in 'aeiouAEIOU':  # Simplified condition
            return True
        return False

    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        i = 0
        j = len(s) - 1
        s = list(s)  
        while i < j:
            if self.isVowel(s[i]) and not self.isVowel(s[j]):
                j -= 1
            elif self.isVowel(s[j]) and not self.isVowel(s[i]):
                i += 1
            elif self.isVowel(s[i]) and self.isVowel(s[j]):
                s[i], s[j] = s[j], s[i]
                i += 1
                j -= 1
            else:
                i += 1
                j -= 1
        return ''.join(s)  
