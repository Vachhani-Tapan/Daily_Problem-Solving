// Last updated: 4/15/2026, 10:44:09 AM
class Solution {
public:
    int maxDistinct(string s) {
        set<char> s1(s.begin() , s.end());
        return s1.size();
    }
};