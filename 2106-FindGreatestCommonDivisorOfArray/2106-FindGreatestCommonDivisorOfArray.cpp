// Last updated: 4/15/2026, 10:47:09 AM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int sml = *min_element(nums.begin() , nums.end());
        int lrg = *max_element(nums.begin() , nums.end());
        int gcd1 = 0;
        for(int i = 1 ; i <= sml ; i++){
            if((lrg % i == 0) && (sml % i == 0)){
                gcd1 = max(gcd1,i);
            }
        }
        return gcd1;
    }
};