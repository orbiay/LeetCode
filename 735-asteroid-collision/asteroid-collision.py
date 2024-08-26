class Solution(object):
    def asteroidCollision(self, ast):
        """
        :type asteroids: List[int]
        :rtype: List[int]
        """
        listt = []
        i = 0
        for n in ast:
            if n > 0:
                listt.append(n)
            else:
                if i == 0:
                    listt.append(n)
                else:
                    if n < 0 and len(listt):
                        save = listt.pop()
                        if save < 0:
                            listt.append(save)
                            listt.append(n)
                            continue
                        else:
                            while save > 0 and  save < -(n)  and len(listt):
                                save = listt.pop()
                            if save < 0 and n < 0:
                                listt.append(save)
                                listt.append(n)
                            elif (len(listt) ==  0 and save < -(n)):
                                listt.append(n)
                            elif save == -(n):
                                continue
                            else:
                                listt.append(save)
                    else:
                        listt.append(n)
            i += 1
        return listt
