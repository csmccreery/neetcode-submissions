class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        unique_hash = {}
        for num in nums:
            if num not in unique_hash:
                unique_hash[num] = True
            else:
                return True
        
        return False