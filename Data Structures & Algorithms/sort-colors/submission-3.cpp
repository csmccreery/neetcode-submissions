class Solution {
private:
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size() - 1;
        while (i <= k) {
            if (nums[i] == 0) {
                swap(&nums[j], &nums[i]);
                j++;
            } else if (nums[i] == 2) {
                swap(&nums[i], &nums[k]);
                k--;
                i--;
            }
            i++;
        }
    }
};