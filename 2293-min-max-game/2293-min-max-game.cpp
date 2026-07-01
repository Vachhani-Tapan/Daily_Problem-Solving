class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size() > 1){
            vector<int> newnum(nums.size() / 2);
            for(int i = 0 ; i < newnum.size() ; i++){
                if(i % 2 == 0){
                    newnum[i] = min(nums[2 * i], nums[2 * i + 1]);
                }
                else{
                    newnum[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            }
            nums = newnum;
        }
        return nums[0];
    }
};