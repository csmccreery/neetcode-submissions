class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) 
            return "";

        std::string longest_prefix = "";

        for (int i = 0; i < strs[0].length(); i++) {
            for (int j = 0; j < strs.size(); j++) {
                if (i >= strs[j].length() || strs[j][i] != strs[0][i])
                    return longest_prefix;
            }

            longest_prefix += strs[0][i];
        }

        return longest_prefix;
    }
};