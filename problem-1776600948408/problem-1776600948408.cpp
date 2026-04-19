// Last updated: 4/19/2026, 5:45:48 PM
1class Solution {
2public:
3    int reverseDegree(string s) {
4        int ans = 0;
5        for(int i = 0 ; i < s.size() ; i++){
6            ans += (123 - s[i]) * (i + 1);
7        }
8        return ans;
9    }
10};