class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> hash_set;
        for (const auto& num : nums) {
            if (num >= 1) {
                hash_set.insert(num);
            } else {
                continue;
            }
        }

        int n = 1;
        while (hash_set.find(n) != hash_set.end()) {
            n++;
        }

        return n;
    }
};