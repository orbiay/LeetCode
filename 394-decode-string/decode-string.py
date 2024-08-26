class Solution(object):
    def decodeString(self, s):
        """
        :type s: str
        :rtype: str
        """
        listt = []

        for n in s:
            if n == ']':
                char = listt.pop()
                string = ""
                digits = ""
                while char.isalpha():
                    string = char + string
                    char = listt.pop()
                char = listt.pop()
                while char.isdigit():
                    digits = char + digits
                    if (len(listt) == 0):
                        break
                    char = listt.pop()
                    if char.isdigit() == False:
                        listt.append(char)
                num = int(digits)
                while num > 0:
                    listt.append(string)
                    num -= 1
            else:
                listt.append(n)
        string = ""
        for n in listt:
            string += n
        return string
# [a,a,a,]
# bc