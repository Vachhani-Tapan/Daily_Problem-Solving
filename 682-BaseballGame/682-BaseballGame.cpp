// Last updated: 4/15/2026, 10:48:48 AM
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v1;
        for(int i = 0 ; i < operations.size() ; i++){
            if(operations[i] == "C"){
                v1.pop_back();
            }
            else if(operations[i] == "D"){
                v1.push_back(v1.back() * 2);
            }
            else if(operations[i] == "+"){
                int val = v1[v1.size() - 1] + v1[v1.size() - 2];
                v1.push_back(val);
            }
            else{
                v1.push_back(stoi(operations[i]));
            }
        }
        int ans = 0;
        for(auto k : v1){
            ans += k;
        }
        return ans;
    }
};