class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int count = 0;
        int target = nums.size() / 2;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == nums[target]){
                count++;
            }
            if(count > 1){
                return false;
            }
        }
        return true;
    }
};