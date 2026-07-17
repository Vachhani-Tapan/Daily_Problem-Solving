class Solution {
public:
    int findLHS(vector<int>& nums) {

        // method 01 sliding window with sorting

        // sort(nums.begin() , nums.end());
        // int left = 0;
        // int ans = 0;
        // for(int i = 0 ; i < nums.size() ; i++){
        //     while(nums[i] - nums[left] > 1){
        //         left++;
        //     }
        //     if(nums[i] - nums[left] == 1){
        //         ans = max(ans , i - left + 1);
        //     }
        // }
        // return ans;

        // method - 02 using map
        
        map<int, int> freq;
        int ans = 0;
        for (auto k : nums) {
            freq[k]++;
        }
        for (auto k : freq) {
            if (freq.count(k.first + 1)) {
                int currLen = k.second + freq[k.first + 1];
                ans = max(ans , currLen);
            }
        }
        return ans;
    }
};