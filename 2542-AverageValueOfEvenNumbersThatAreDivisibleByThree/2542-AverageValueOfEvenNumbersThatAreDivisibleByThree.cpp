// Last updated: 4/15/2026, 10:46:08 AM
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0;
        int sum = 0;
        for(auto k : nums){
            if(k % 6 == 0){
                sum += k;
                count++;
            }
        }
        if(count == 0) return 0;
        return (sum / count);
    }
};