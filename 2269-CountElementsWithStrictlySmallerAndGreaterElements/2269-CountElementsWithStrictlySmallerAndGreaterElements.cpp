// Last updated: 4/15/2026, 10:46:55 AM
class Solution {
public:
    int countElements(vector<int>& nums) {
        int min1 = *min_element(nums.begin() , nums.end());
        int max1 = *max_element(nums.begin() , nums.end());
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if((nums[i] > min1) && (nums[i] < max1)){
                count++;
            }
        }
        return count;
    }
};