class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        binary = list(bin(num)[2:])
        newString = ""
        for i in range(len(binary)):
            if binary[i] == '0':
                binary[i] = '1'
                newString += binary[i]
            else:
                binary[i] = '0'
                newString += binary[i]

        print(binary)
        return int(newString,2)

        