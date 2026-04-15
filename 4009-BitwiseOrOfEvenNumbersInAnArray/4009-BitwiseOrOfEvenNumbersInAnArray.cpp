// Last updated: 4/15/2026, 10:44:17 AM
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans = 0;
        for(auto k : nums){
            if(k % 2 == 0){
                cout << k ;
                ans |= k;
            }
        }
        return ans;
    }
};