// Last updated: 4/15/2026, 10:44:33 AM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
        }
        return sum % k;
    }
};