// Last updated: 6/23/2026, 10:25:05 AM
class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> s1(s.begin(), s.end());
        return s1.size();
    }
};