class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> comp_map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (comp_map.find(complement) == comp_map.end()) {
                comp_map[nums[i]] = i;
            } else {
                return {comp_map[complement], i};
            }
        }
        return {-1, -1};
    }
};
