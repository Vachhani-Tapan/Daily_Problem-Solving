// Last updated: 4/15/2026, 10:48:27 AM
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int , int> m1;
        for(auto k : arr){
            m1[k]++;
            if(m1[k] > (arr.size())/4){
                return k;
            }
        }
        return 0;
    }
};