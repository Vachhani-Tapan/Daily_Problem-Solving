// Last updated: 6/23/2026, 10:23:17 AM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for(auto k : nums){
            ans.push_back(k);
        }
        for(int i = nums.size() - 1 ; i >=0 ; i--){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};