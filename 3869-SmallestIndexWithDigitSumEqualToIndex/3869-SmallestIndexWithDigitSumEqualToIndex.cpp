// Last updated: 4/15/2026, 10:44:29 AM
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0;
            while(nums[i]){
                sum += nums[i] % 10;
                nums[i] = nums[i] / 10;
            }
            if(sum == i) return i;
        }
        return -1;
    }
};