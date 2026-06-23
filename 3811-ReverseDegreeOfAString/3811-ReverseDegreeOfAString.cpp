// Last updated: 6/23/2026, 10:24:07 AM
class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            ans += (123 - s[i]) * (i + 1);
        }
        return ans;
    }
};