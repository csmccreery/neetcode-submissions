class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2 * nums.size(), 0);
        for (int i = 0; i < ans.size(); i++) {
            int index = i % nums.size();
            ans[i] = nums[index];
        }

        return ans;
    }

};