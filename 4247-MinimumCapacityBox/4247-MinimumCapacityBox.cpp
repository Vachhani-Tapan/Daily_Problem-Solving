// Last updated: 4/15/2026, 10:43:45 AM
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        // view the 4th testcase for clearity [10,6,8,12] item = 6;
        int minsz = INT_MAX;
        int ans = INT_MAX;
        for(int i = 0 ; i < capacity.size() ; i++){
            if(capacity[i] >= itemSize){
                if(minsz > capacity[i]){
                    minsz = capacity[i];
                    ans = i;
                }
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};