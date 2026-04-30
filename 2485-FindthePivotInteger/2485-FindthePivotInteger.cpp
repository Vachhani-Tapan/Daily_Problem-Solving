// Last updated: 4/30/2026, 6:56:24 PM
1class Solution {
2public:
3    int pivotInteger(int n) {
4        int total = (n * (n + 1)) / 2;
5        for(int i = 1 ; i <= n ; i++){
6            int l = (i * (i + 1)) / 2;
7            int r = total - l + i;
8            if(l == r){
9                return i;
10            }
11        }
12        return -1;
13    }
14};