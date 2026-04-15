// Last updated: 4/15/2026, 10:48:19 AM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int dig = 0;
            while(nums[i]){
                dig++;
                nums[i] = nums[i] / 10;
            }
            if(dig % 2 == 0) count++;
        }
        return count;
    }
};