class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for(auto k : nums){
            sum += k;
        }
        int ls = 0;
        int rs = sum - nums[0];
        if(rs == ls){
            return 0;
        }
        for(int i = 1 ; i < nums.size() ; i++){
            ls += nums[i-1];
            rs = sum - ls - nums[i];
            if(ls == rs){
                return i;
            }
        }
        return -1;
    }
};