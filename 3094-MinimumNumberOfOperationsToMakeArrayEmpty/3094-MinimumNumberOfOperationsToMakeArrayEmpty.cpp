// Last updated: 4/15/2026, 10:45:18 AM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> m1;
        for (auto k : nums) {
            m1[k]++;
        }
        int count = 0;
        for (auto k : m1) {
            if (k.second == 1){
                return -1;
            }
            count += ceil(k.second / 3.0);
        }
        return count;
    }
};