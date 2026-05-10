// Last updated: 5/10/2026, 9:16:29 PM
1class Solution {
2public:
3    vector<int> sumZero(int n) {
4        vector<int> ans;
5        for(int i = 1 ; i <= n / 2 ; i++){
6            ans.push_back(i);
7            ans.push_back(-i);
8        }
9        if(n % 2 != 0){
10            ans.push_back(0);
11        }
12        return ans;
13    }
14};