class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::unordered_map<int, int> sums;
        sums[0] = 1;
        int currSum = 0;
        int count = 0;

        for (const auto& num : nums) {
            currSum += num;

            count += sums[currSum - k];
            sums[currSum]++;
        }

        return count;
    }
};