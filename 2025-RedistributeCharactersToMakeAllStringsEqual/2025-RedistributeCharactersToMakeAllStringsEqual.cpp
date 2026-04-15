// Last updated: 4/15/2026, 10:47:19 AM
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> m1;
        for (auto k : words) {
            for (auto c : k) {
                m1[c]++;
            }
        }
        int n = words.size();
        for (auto k : m1) {
            if (k.second % n != 0) {
                return false;
            }
        }
        return true;
    }
};