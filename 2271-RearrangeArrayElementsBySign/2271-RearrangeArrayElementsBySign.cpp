// Last updated: 4/15/2026, 10:46:53 AM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1(nums.size() , 0);
        int pos = 0;
        int neg = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > 0){
                v1[pos] = nums[i];
                pos += 2;
            }
            else{
                v1[neg] = nums[i];
                neg += 2;
            }
        }
        return v1;
    }
};