// Last updated: 6/23/2026, 10:25:01 AM
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        unordered_map<string, int> m1;
        for (auto k : words) {
            string rev = k;
            reverse(rev.begin() , rev.end());
            if(m1[rev] > 0){
                count++;
                m1[rev]--;
            }
            else{
                m1[k]++;
            }
        }
        return count;
    }
};