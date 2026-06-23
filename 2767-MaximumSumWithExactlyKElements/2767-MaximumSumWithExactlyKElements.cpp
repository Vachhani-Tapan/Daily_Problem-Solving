// Last updated: 6/23/2026, 10:25:09 AM
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = 0;
        int n = *max_element(nums.begin(), nums.end());
        while (k--) {
            sum += n;
            n = n + 1;
        }
        return sum;
    }
};