// Last updated: 6/23/2026, 10:26:34 AM
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m1;
        for (auto k : arr) {
            m1[k]++;
        }
        int count = 0;
        for (auto s : arr) {
            if (m1[s] == 1) {
                count++;
                if (k == count) {
                    return s;
                }
            }
        }
        return "";
    }
};