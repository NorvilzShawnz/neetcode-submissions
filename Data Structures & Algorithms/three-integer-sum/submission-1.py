class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        output = []

        for sentinel in range(len(nums)):
            left = sentinel +1
            right = len(nums)-1
            while left < right:
                if nums[sentinel] + nums[left] + nums[right] == 0:
                    if [nums[sentinel],nums[left],nums[right]] not in output:
                        output.append([nums[sentinel], nums[left],nums[right]])
                    left += 1
                    right -=1
                elif nums[sentinel] + nums[left] + nums[right] > 0:
                    right-=1
                else:
                    left+=1

        return output
                
