// Last updated: 6/23/2026, 10:27:58 AM
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        vector<int> v1, v2;
        for (auto k : s1) {
            if (s2.find(k) == s2.end()) {
                v1.push_back(k);
            }
        }
        for (auto k : s2) {
            if (s1.find(k) == s1.end()) {
                v2.push_back(k);
            }
        }
        return {v1, v2};
    }
};