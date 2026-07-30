class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        long long maxSum = 0;
        long long windowSum = 0;
        unordered_map<int,int> freq;

        while(j < nums.size()){

            windowSum += nums[j];
            freq[nums[j]]++;

            if(j - i + 1 == k){

                if(freq.size() == k){
                    maxSum = max(maxSum , windowSum);
                }

                windowSum -= nums[i];
                freq[nums[i]]--;
                
                // if the freq become 0 then remove the element from the map
                
                if(freq[nums[i]] == 0){
                    freq.erase(nums[i]);
                }

                i++;
            }

            j++;
        }
        return maxSum;
    }
};