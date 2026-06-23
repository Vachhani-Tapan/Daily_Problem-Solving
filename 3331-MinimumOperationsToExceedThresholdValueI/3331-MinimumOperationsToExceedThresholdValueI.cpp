// Last updated: 6/23/2026, 10:24:37 AM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(auto i: nums){
            if(i < k){
                count++;
            }
        }
        return count;
    }
};