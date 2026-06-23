// Last updated: 6/23/2026, 10:23:40 AM
class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin() , s.begin() + k);
        return s;
    }
};