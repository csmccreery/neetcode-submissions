class Solution {
public:

    string encode(vector<string>& strs) {
        stringstream ss;
        for (const auto& str : strs) {
            ss << '#' << std::to_string(str.length()) << '#' << str;
        }

        return ss.str();
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '#') {
                i++;
                int anchor = i;
                while (s[i] != '#') {
                    i++;
                }
                
                int count = stoi(s.substr(anchor, i));
                i++;

                if (i + count < s.length()) {
                    res.push_back(s.substr(i, count));
                    i += count;
                    continue;
                } else {
                    res.push_back(s.substr(i, s.length() - 1));
                    break;
                }
            }
            i++;
        }
        
        return res;
    }
};
