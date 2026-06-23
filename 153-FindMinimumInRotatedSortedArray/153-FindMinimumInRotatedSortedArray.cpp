// Last updated: 6/23/2026, 10:29:32 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int mid = (l + r) / 2;
            if(nums[mid] > nums[r]){
                l = mid + 1;
            } 
            else{
                r = mid;
            }
        }
        return nums[l];
    }
};