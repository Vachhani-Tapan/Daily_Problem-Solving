// Last updated: 4/15/2026, 10:43:52 AM
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(int i = 0 ; i < words.size() ; i++){
            int sum = 0;
            for(int j = 0 ; j < words[i].size() ; j++){
                sum += weights[words[i][j] - 'a'];
            }
            int mod = sum % 26;
            ans += 'a' + (26 - mod - 1);
        }
        return ans;
    }
};