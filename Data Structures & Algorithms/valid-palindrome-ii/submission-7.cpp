class Solution {
private:
    bool palindrome(string& s, int start, int stop) {
        while (start < stop) {
            if (s[start] != s[stop]) {
                return false;
            }
            start++, stop--;
        }

        return true;
    }
public:
    bool validPalindrome(string s) {
        int start = 0, stop = s.length() - 1;

        while (start < stop) {
            if (s[start] != s[stop]) {
                return 
                    palindrome(s, start + 1, stop) ||
                    palindrome(s, start, stop - 1);
            }
            start++; stop--;
        }

        return true;
    }
};