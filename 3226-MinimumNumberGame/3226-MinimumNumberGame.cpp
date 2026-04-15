// Last updated: 4/15/2026, 10:45:06 AM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i += 2) {
            swap(nums[i], nums[i + 1]);
        }
        return nums;
    }
};