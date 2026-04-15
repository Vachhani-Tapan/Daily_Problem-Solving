// Last updated: 4/15/2026, 10:48:09 AM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        for(int i = 0 ; i < nums.size() ; i++){
            res.insert(res.begin() + index[i] , nums[i]);
        }
        return res;
    }
};