class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_hash = {}
        for index, num in enumerate(nums):
            complement = target - num
            if complement in num_hash:
                return [num_hash[complement], index]
            
            num_hash[num] = index
