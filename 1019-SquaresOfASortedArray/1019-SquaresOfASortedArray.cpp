// Last updated: 4/15/2026, 10:48:34 AM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> pos;
        vector<int> neg;

        for(auto k : nums){
            if(k >= 0){
                pos.push_back(k);
            }
            else{
                neg.push_back(k);
            }
        }
        // only negative element array
        if(pos.size() == 0){
            reverse(neg.begin() , neg.end());
            for(int i = 0 ; i < neg.size() ; i++){
                neg[i] = neg[i] * neg[i];
            }
            return neg;
        }
        // only positive element array
        if(neg.size() == 0){
            for(int i = 0 ; i < pos.size() ; i++){
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }

        int a = pos.size();
        int b = neg.size();
        vector<int> res(a + b);
        int i = 0;
        int j = 0;
        int id = 0;

        for (int i = 0; i < neg.size(); i++) {
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(), neg.end());
        for (int i = 0; i < pos.size(); i++) {
            pos[i] = pos[i] * pos[i];
        }

        while (i < a && j < b) {
            if (pos[i] <= neg[j]) {
                res[id] = pos[i];
                id++;
                i++;
            } else {
                res[id] = neg[j];
                j++;
                id++;
            }
        }
        while (i < pos.size()) {
            res[id] = pos[i];
            i++;
            id++;
        }
        while (j < neg.size()) {
            res[id] = neg[j];
            j++;
            id++;
        }
        return res;

        // for(int i = 0 ; i < nums.size() ; i++){
        //     nums[i] = nums[i] * nums[i];
        // }
        // sort(nums.begin() , nums.end());
        // return nums;
    }
};