# https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/

class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        for i in range(k):
            min = float("inf")
            pointer = -1
            for i in range(len(nums)):
                if nums[i] < min:
                    min = nums[i]
                    pointer = i
            nums[pointer] *= multiplier
        return nums
