// Last updated: 4/15/2026, 10:47:26 AM
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int ans = INT_MAX;
        for(int i = start ; i < nums.size() ; i++){
            if(nums[i] == target){
                ans = min(ans , abs(i - start));
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target){
                ans = min(ans , abs(i - start));
            }
        }
        return ans;
    }
};