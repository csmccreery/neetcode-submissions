class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> um;
        for (auto num : nums) {
            auto item = um.find(num);
            if (item != um.end()) {
                return true;
            } else {
                um[num] = true;
            }
        }

        return false;
    }
};