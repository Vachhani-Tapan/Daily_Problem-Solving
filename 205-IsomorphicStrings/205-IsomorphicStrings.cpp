// Last updated: 6/23/2026, 10:29:19 AM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // s = "badc" and t = "baba"
        unordered_map<char, char> m1;
        set<char> used;
        for (int i = 0; i < s.size(); i++) {
            if (m1[s[i]] == 0) {
                if (used.count(t[i])) {
                    return false;
                }
                m1[s[i]] = t[i];
                used.insert(t[i]);
            } else if (m1[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};