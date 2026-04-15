// Last updated: 4/15/2026, 10:49:16 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
    }
};