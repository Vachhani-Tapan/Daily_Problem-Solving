// Last updated: 5/8/2026, 6:20:49 PM
1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        long long ans = 0;
5        for(auto k : columnTitle){
6            ans = ans * 26 + (k - 'A' + 1);
7        }
8        return (int)ans;
9    }
10};