// Last updated: 6/23/2026, 10:26:52 AM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int maxi = 0;
        int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            maxi = max(maxi , nums[i++] + nums[j--]);
        }
        return maxi;
    }
};