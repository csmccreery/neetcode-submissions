class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 0;
        for (const auto& num : nums) {
            if (numSet.find(num - 1) == numSet.end()) {
                // n - 1 indicates start of new sequence

                int length = 1;
                while (numSet.find(num + length) != numSet.end()) {
                    length++;
                }

                longest = std::max(longest, length);
            }
        }

        return longest;
    }
};
