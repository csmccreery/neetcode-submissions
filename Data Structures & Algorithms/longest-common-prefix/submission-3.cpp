class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest_prefix = "";
        bool found = false;

        std::sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];

        for (int i = 0; i < last.length(); i++) {
            if (first[i] != last[i])
                break;

            longest_prefix += first[i];
        }

        return longest_prefix;
    }
};