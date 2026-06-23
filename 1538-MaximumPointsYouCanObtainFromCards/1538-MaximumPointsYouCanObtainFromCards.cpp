// Last updated: 6/23/2026, 10:27:37 AM
class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 0; i < k; i++) {
            leftSum += nums[i];
        }
        int idx = nums.size() - 1;
        int maxSum = leftSum;
        for (int i = k - 1; i >= 0; i--) {
            leftSum -= nums[i];
            rightSum += nums[idx];
            idx--;
            maxSum = max(maxSum, leftSum + rightSum);
        }
        return maxSum;
    }
};