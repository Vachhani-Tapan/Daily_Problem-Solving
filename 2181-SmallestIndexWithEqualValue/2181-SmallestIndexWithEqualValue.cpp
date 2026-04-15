// Last updated: 4/15/2026, 10:46:59 AM
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            if(i % 10 == nums[i]){
                return i;
            }
        }
        return -1;
    }
};