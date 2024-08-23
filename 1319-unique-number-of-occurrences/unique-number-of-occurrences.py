class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        dics = {}
        unique = [0] * 2001 
        for n in arr:
            if (n < 0):
                n += 1000
            elif n > 0:
                n += 1000
            unique[n] += 1
        print(unique)
        for i in range(len(unique)):
            if i >= len(unique):
                break
            if unique[i] == 0:
                continue
            num = unique[i]
            unique.pop(i)
            if num in unique:
                return False
                
        return True
            # if n not in unique:
            #     unique.append(n)
        
            
        