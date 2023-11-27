class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        hash = {}
        length = len(nums)
        for ele in nums:
            if ele in hash:
                hash[ele] = hash[ele] +  1
            else:
                hash[ele] = 1
            if hash[ele] > (length / 2):
                return ele
        return 0
        