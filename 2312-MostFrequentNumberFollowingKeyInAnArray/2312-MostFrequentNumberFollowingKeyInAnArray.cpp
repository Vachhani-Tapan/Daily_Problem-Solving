// Last updated: 6/23/2026, 10:26:03 AM
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int ans = 0;
        int maxCount = 0;
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == key) {
                int target = nums[i + 1];
                freq[target]++;
                if (freq[target] > maxCount) {
                    maxCount = freq[target];
                    ans = target;
                }
            }
        }
        return ans;
    }
};