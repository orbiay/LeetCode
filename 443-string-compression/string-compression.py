class Solution(object):
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """
        i, j,count,fr,n = 0,1,1,1,len(chars)
        while j < n :
            if chars[i] == chars[j]:
                count += 1
                chars.pop(j)
                n -= 1
            else:
                if count > 1:
                    digits = list(str(count))
                    print(digits)
                    d = len(digits)
                    for f in range(d):
                        chars.insert(j + f,digits[f])
                        n += 1
                    i = j + 1
                    j += 2
                else:
                    i += 1
                    j += 1
                count = 1
        if (count > 1):
            digits2 = list(str(count))
            d2 = len(digits2)
            for f in range(d2):
                chars.insert(j + f,digits2[f])
        return len(chars)

# ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
# i = 0
# j = 1
# count = 1
