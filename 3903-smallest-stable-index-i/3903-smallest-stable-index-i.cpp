class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int maxEle = nums[0];
        for(int i = 0 ; i < nums.size(); i++){

            int mini = nums[i];
            maxEle = max(maxEle , nums[i]);

            for(int j = i ; j < nums.size() ; j++){
                mini = min(mini , nums[j]);
            }

            if(maxEle - mini <= k){
                return i;
            }

        }
        return -1;
    }
};