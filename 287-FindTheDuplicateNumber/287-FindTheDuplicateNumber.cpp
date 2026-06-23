// Last updated: 6/23/2026, 10:29:06 AM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1(n + 1 , 0);
        for(int i = 0 ; i < nums.size() ; i++){
            if(v1[nums[i]] == 0){
                v1[nums[i]] = 1;
            }
            else{
                return nums[i];
            }
        }
        return 0;
    }
};