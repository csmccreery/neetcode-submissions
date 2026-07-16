class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) 
            return false;

        int alphaArr[26];

        for (int i = 0; i < s.length(); i++) {
            int ascii1 = (int)(s[i] - 'a');
            int ascii2 = (int)(t[i] - 'a');

            alphaArr[ascii1]++;
            alphaArr[ascii2]--;
        }

        for (auto alpha : alphaArr) {
            if (alpha != 0)
                return false;
        }
        return true;
    }
};
