// Last updated: 6/23/2026, 10:24:43 AM
class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> v1;
        for (int i = 1; i < mountain.size() - 1; i++) {
            if (mountain[i] > mountain[i - 1] &&
                mountain[i] > mountain[i + 1]) {
                v1.push_back(i);
            }
        }
        return v1;
    }
};