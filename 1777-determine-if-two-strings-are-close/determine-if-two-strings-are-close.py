class Solution(object):
    def closeStrings(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: bool
        """
        dics = {}
        dics2 = {}
        set1 = set(word1)
        set2 = set(word2)
        if set1 != set2:
            return False
        if len(word1) != len(word2):
            return 0
        for n in word1:
            if n in dics:
                dics[n] += 1
            else:
                dics[n] = 1
        for n in word2:
            if n in dics2:
                dics2[n] += 1
            else:
                dics2[n] = 1
        return sorted(dics.values()) == sorted(dics2.values())
        