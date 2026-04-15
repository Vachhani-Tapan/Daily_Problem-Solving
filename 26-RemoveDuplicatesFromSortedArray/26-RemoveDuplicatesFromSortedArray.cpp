// Last updated: 4/15/2026, 10:49:57 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int res = 1;
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                j++;
                continue;
            }
            else{
                nums[i+1] = nums[j];
                i++; 
                j++;
                res++;
            }
        }
        return res;
    }
};