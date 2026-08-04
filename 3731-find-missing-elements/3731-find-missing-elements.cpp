class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v1;
        int j = 0; 
        sort(nums.begin() , nums.end());
        int min1 = *min_element(nums.begin() , nums.end());
        int max1 = *max_element(nums.begin() , nums.end());
        for(int i = min1 ; i <= max1 ; i++){
            if(nums[j] == i){
                j++;
            }
            else{
                v1.push_back(i);
            }
        }
        return v1;
    }
};