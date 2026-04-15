// Last updated: 4/15/2026, 10:46:38 AM
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        while (n > 1) {
            vector<int> temp;
            for (int i = 0; i < nums.size() - 1; i++) {
                temp.push_back((nums[i] + nums[i + 1]) % 10);
            }
            nums = temp;
            n--;
        }
        return nums[0];
    }
};