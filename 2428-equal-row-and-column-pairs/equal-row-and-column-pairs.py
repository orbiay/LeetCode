class Solution(object):
    def equalPairs(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        dics = {}
        for n in grid:
            string = ""
            for c in n:
                string += str(c)
                string += "/"
            if string in dics:
                print(string)
                dics[string] += 1
            else:
                print(string)
                dics[string] = 1
            # print(string)
        print(dics)
        j = 0
        i = 0
        s = ""
        count = 0
        while i < len(grid):
            s += str(grid[i][j])
            s += "/"
            if i + 1 == len(grid):
                i = -1
                j += 1
                if s in dics:
                    count += dics[s]
                s = ""
            if j == len(grid):
                break
            i += 1 

        return count

        # 1 1 | 1
        # 1 1 | 1