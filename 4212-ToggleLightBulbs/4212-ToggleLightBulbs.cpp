// Last updated: 4/15/2026, 10:43:55 AM
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int, int> m1;
        vector<int> res;
        for (auto k : bulbs)
            m1[k]++;
        for (auto k : m1) {
            if (k.second == 1 || k.second % 2 != 0) {
                res.push_back(k.first);
            }
        }
        return res;
    }
};