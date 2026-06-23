// Last updated: 6/23/2026, 10:24:12 AM
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> m1;
        for (auto k : s) {
            m1[k]++;
        }
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (auto k : m1) {
            if (k.second % 2 != 0 && k.second > maxi) {
                maxi = k.second;
            }
            if (k.second % 2 == 0 && k.second < mini) {
                mini = k.second;
            }
        }
        return maxi - mini;
    }
};