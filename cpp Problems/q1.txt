class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m1;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int first = nums[i];
            int sec = target - first;
            if(m1.find(sec) != m1.end()){
// != m1.end because if m1.find not found then it will give the last index value so we are checking that it is not last index value
                ans.push_back(i);
                ans.push_back(m1[sec]);
            }
            m1[first] = i;
        }
        return ans;
    }
};