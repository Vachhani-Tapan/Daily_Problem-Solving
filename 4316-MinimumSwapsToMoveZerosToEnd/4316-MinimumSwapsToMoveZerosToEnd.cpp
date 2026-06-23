// Last updated: 6/23/2026, 10:23:11 AM
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zerocnt = 0;
        int size = 0;
        for(auto k : nums){
            if(k == 0){
                zerocnt++;
            }
        }
        int n = nums.size() - 1;
        for(int i = n ; i > n - zerocnt ; i--){
            if(nums[i] == 0){
                size++;
            }
        }
        return zerocnt - size;
    }
};