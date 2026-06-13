// Last updated: 6/13/2026, 8:55:46 AM
1class Solution {
2public:
3    string mapWordWeights(vector<string>& words, vector<int>& weights) {
4        string ans = "";
5        for(int i = 0 ; i < words.size() ; i++){
6            int sum = 0;
7            for(int j = 0 ; j < words[i].size() ; j++){
8                sum += weights[words[i][j] - 'a'];
9            }
10            int mod = sum % 26;
11            ans += 'a' + (26 - mod - 1);
12        }
13        return ans;
14    }
15};