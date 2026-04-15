// Last updated: 4/15/2026, 10:46:12 AM
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            if(nums[i] < 0 && nums[j] > 0 && abs(nums[i]) == nums[j]){
                return nums[j];
            }
            else if(abs(nums[i]) > nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return -1;
    }
};