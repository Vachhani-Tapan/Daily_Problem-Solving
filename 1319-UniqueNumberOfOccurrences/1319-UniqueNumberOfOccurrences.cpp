// Last updated: 4/15/2026, 10:48:23 AM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m1;
        for (auto k : arr) {
            m1[k]++;
        }
        unordered_set<int> s1;
        for (auto k : m1) {
            if (s1.count(k.second)) {
                return false;
            } else {
                s1.insert(k.second);
            }
        }
        return true;
    }
};