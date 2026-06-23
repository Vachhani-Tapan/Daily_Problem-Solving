// Last updated: 6/23/2026, 10:27:48 AM
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v1(26, 0);
        for (auto k : s) {
            v1[k - 'a']++;
        }
        for (auto k : t) {
            v1[k - 'a']--;
        }
        int ans = 0;
        for (auto k : v1) {
            ans += abs(k);
        }
        return ans / 2;
    }
};