// Last updated: 4/15/2026, 10:49:27 AM
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        return nums[nums.size() - k];
    }
};