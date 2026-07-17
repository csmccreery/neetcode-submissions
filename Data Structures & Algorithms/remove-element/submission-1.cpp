class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int result = 0;
        for (const auto& num : nums) {
            if (num != val) {
                ans.push_back(num);
            }
        }

        nums = ans;
        return ans.size();
    }
};