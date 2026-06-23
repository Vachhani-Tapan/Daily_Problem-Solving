// Last updated: 6/23/2026, 10:24:15 AM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalSum = 0;
        for (auto k : nums) {
            totalSum += k;
        }
        int runSum = 0;
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            runSum += nums[i];
            int rightSum = totalSum - runSum;
            if ((runSum - rightSum) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};