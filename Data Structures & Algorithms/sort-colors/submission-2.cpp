class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0;
        for (int k = 0; k < nums.size(); k++) {
            int tmp = nums[k];
            nums[k] = 2;
            if (tmp < 2)
                nums[j++] = 1;

            if (tmp < 1)
                nums[i++] = 0;
        }
    }
};