// Last updated: 4/15/2026, 10:44:45 AM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if((nums[i] + 1) % 3 == 0){
                count = count + 1;
            }
            if((nums[i] - 1) % 3 == 0){
                count = count + 1;
            }
        }
        return count;
    }
};