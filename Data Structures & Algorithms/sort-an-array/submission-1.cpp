class Solution {
private:
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void heapify(vector<int>& nums, int n, int p) {
        int l = (p << 1) + 1;
        int r = (p << 1) + 2;
        int largest = p;

        if (l < n && nums[l] > nums[largest])
            largest = l;
        if (r < n && nums[r] > nums[largest])
            largest = r;
        if (largest != p) {
            swap(&nums[p], &nums[largest]);
            heapify(nums, n, largest);
        }
    }

    void heapSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(nums, n, i);
        }

        for(int i = n - 1; i > 0; i--) {
            swap(&nums[0], &nums[i]);
            heapify(nums, i, 0);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        heapSort(nums);
        return nums;
    }
};