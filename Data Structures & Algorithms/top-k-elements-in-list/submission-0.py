class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        num_hash = {}
        for element in nums:
            if element in num_hash:
                num_hash[element] += 1
            else:
                num_hash[element] = 1

        most_frequent = sorted(
            [(key, value) for key, value in num_hash.items()],
            key=lambda x: x[1],
            reverse=True
        )

        return [item[0] for item in most_frequent][:k]