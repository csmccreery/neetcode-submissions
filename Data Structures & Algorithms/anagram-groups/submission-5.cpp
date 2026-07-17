class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, vector<string>> buckets;

        for (const auto& str : strs) {
            std::vector<int> count(26, 0);

            for (const auto& item : str) {
                count[(int)(item - 'a')]++;
            }

            std::string key = to_string(count[0]);
            for (int i = 0; i < 26; i++) {
                key += "#" + std::to_string(count[i]);
            }

            buckets[key].push_back(str);
        }

        std::vector<std::vector<string>> result;
        for (const auto& pair : buckets) {
            result.push_back(pair.second);
        }

        return result;
    }
};
