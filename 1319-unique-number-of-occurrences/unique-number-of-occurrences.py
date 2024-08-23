class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        dics = {}
        for n in arr:
            if n in dics:
                dics[n] += 1
            else:
                dics[n] = 1
        return len(dics) - len(set(dics.values())) == 0

        
            
        