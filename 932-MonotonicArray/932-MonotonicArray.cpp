// Last updated: 6/23/2026, 10:28:23 AM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool monoincre = true;
        bool monodecre = true;
        for(int i = 1 ; i < nums.size() - 1 ; i++){
            if(nums[i] < nums[i-1] || nums[i] > nums[i+1]){
                monoincre = false;
                break;
            }
        }
        for(int i = 1 ; i < nums.size() - 1 ; i++){
            if(nums[i] > nums[i-1] || nums[i] < nums[i+1]){
                monodecre = false;
                break;
            }
        }
        if(monoincre) return true;
        if(monodecre) return true;
        return false;
    }
};