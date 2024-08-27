class RecentCounter(object):
    def __init__(self):
        self.count = 0
        self.listt = []

    def ping(self, t):
        """
        :type t: int
        :rtype: int
        """
        self.listt.append(t)
        if len(self.listt) == 1:
            return 1
        num = self.listt[0]
        while num < t - 3000:
            self.listt.pop(0)
            num = self.listt[0]
        return len(self.listt)



        # self.listt.append(t)
        # # Remove elements that are outside the 3000 ms window
        # while self.listt[0] < t - 3000:
        #     self.listt.pop(0)
        # return len(self.listt)
        


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)