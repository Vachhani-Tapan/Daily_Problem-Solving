// Last updated: 6/23/2026, 10:28:02 AM
class Solution {
public:
    string makeFancyString(string s) {
        // here in this question we can not use te erase() property because it itself takes o(n) line so overall become o(n2) which will give the tle error.
        if (s.size() < 3) {
            return s;
        }
        string res;
        for (auto k : s) {
            int n = res.size();
            if (n >= 2 && res[n - 1] == k && res[n - 2] == k) {
                continue;
            }
            res += k;
        }
        return res;
    }
};