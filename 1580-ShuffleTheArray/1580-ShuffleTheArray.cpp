// Last updated: 4/15/2026, 10:48:03 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v1;
        int i = 0; 
        int j = n;
        for(auto k : nums){
            if(j >= 2*n) break;
            v1.push_back(nums[i]);
            v1.push_back(nums[j]);
            i++;
            j++;
        }
        return v1;
    }
};