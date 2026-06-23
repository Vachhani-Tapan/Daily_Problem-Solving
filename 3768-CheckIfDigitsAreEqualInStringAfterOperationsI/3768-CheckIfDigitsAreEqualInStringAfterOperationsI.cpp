// Last updated: 6/23/2026, 10:24:10 AM
class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string res = "";
            for (int i = 1; i < s.size(); i++) {
                res += (s[i] + s[i - 1]) % 10 + '0';
            }
            s = res;
        }
        return s[0] == s[1];
    }
};