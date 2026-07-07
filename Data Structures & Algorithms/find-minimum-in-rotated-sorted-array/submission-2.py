class Solution:
    def findMin(self, nums: List[int]) -> int:
        left , right = 0, len(nums)-1
        minVal = 9999999999999999
        while (left < right):
            mid = (left + right) // 2

            if nums[mid] > nums[right]:
                left = mid + 1
            elif nums[mid] < nums[right]:
                right = mid

        return nums[right]