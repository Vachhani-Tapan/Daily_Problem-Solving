// Last updated: 4/15/2026, 10:47:59 AM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};