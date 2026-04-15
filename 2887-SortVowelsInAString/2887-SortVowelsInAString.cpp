// Last updated: 4/15/2026, 10:45:26 AM
class Solution {
public:
    string sortVowels(string s) {
        vector<char> v1;
        for(auto k : s){
            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u' || k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U'){
                v1.push_back(k);
            }
        }
        sort(v1.begin() , v1.end());
        int j = 0;
        string res = "";
        for(auto k : s){
            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u' || k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U'){
                res += v1[j];
                j++;
            }
            else{
                res += k;
            }
        }
        return res;
    }
};