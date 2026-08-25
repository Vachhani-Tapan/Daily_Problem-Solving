class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st(nums.begin() , nums.end());
        int cnt = k;
        while(st.count(cnt)){
            cnt += k;
        }
        return cnt;
    }
};