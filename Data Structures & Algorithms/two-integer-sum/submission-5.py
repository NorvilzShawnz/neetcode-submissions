class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        h = {}

        for i,value in enumerate(nums):
            complement = target - value

            if complement in h:
                return [h[complement],i]
            
            h[value] = i
