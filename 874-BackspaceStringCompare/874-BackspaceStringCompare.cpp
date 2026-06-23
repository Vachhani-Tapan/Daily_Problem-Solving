// Last updated: 6/23/2026, 10:28:28 AM
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // s = "a##c"   t = "#a#c"   refer this testcase also

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (i == 0) {
                    s.erase(i, 1);
                    i--;
                } else {
                    s.erase(i - 1, 2);
                    i -= 2;
                }
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#') {
                if (i == 0) {
                    t.erase(i, 1);
                    i--;
                } else {
                    t.erase(i - 1, 2);
                    i -= 2;
                }
            }
        }
        return s == t;
    }
};