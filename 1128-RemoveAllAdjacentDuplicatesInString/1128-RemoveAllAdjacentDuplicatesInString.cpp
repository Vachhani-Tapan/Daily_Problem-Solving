// Last updated: 6/23/2026, 10:28:11 AM
class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        for (int i = 0; i < s.size(); i++) {
            int n = res.size();
            if (n >= 1 && res[n - 1] == s[i]) {
                res.pop_back();
            } else {
                res += s[i];
            }
        }
        return res;
    }
};