class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> res(nums.size(), 1);

        int prefix = 1;
        for (int i = 1; i < nums.size(); i++) {
            res[i] = res[i - 1] * nums[i - 1];
        }

        int postfix = 1;
        for (int j = nums.size() - 1; j >= 0; j--) {
            res[j] *= postfix;
            postfix *= nums[j];
        }
        
        return res;
    }
};
