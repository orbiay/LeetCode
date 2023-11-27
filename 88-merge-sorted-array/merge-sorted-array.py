class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        saver = m
        i = 0
        while i < n:
            nums1.pop(saver)
            nums1.insert(saver,nums2[i])
            saver = saver + 1
            i = i + 1
        print(nums1)
        nums1.sort()
        """
        Do not return anything, modify nums1 in-place instead.
        """
        