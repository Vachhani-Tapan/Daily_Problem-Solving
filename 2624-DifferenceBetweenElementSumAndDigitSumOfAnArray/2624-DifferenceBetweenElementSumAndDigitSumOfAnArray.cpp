// Last updated: 4/15/2026, 10:45:54 AM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        long long sum = 0;
        long long digsum = 0;
        for(auto k : nums){
            sum += k;
            if(k <= 9) digsum += k;
            else
            {
                while(k){
                    digsum += k % 10;
                    k = k / 10;
                }
            }
        }
        return sum - digsum;
    }
};