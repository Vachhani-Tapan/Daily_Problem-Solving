// Last updated: 4/15/2026, 10:47:35 AM
class Solution {
public:
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;
    }
};