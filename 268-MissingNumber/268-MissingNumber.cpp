// Last updated: 4/15/2026, 10:49:17 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int tSum = (n * (n + 1)) / 2;
        int realSum = accumulate(nums.begin() , nums.end() , 0);
        return tSum - realSum;
    }
};