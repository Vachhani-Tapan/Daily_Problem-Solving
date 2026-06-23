// Last updated: 6/23/2026, 10:27:00 AM
class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i += 2) {
            s[i] = s[i - 1] + (s[i] - '0');
        }
        return s;
    }
};