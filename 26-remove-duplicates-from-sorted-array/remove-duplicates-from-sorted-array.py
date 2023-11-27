class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        ref = []
        for ele in nums:
            if ref.count(ele) == 0:
                ref.append(ele)
        nums[:] = ref
        return len(nums)

        