// Last updated: 6/23/2026, 10:25:56 AM
class Solution {
public:
    string largestGoodInteger(string s) {
        string res;
        for (int i = 0; i < s.size() - 2; i++) {
            if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
                string str = s.substr(i, 3);
                res = max(res, str);
            }
        }
        return res;
    }
};