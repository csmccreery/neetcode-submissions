class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            int a1 = (int)(s[i] - 'a');
            int a2 = (int)(t[i] - 'a');

            count[a1]++;
            count[a2]--;
        }

        for (const auto num : count) {
            if (num != 0)
                return false;
        }

        return true;
    }
};
