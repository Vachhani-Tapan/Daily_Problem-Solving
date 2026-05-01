// Last updated: 5/1/2026, 10:32:45 AM
1class Solution {
2public:
3    string firstPalindrome(vector<string>& words) {
4        for(auto k : words){
5            string res = k;
6            reverse(res.begin() , res.end());
7            if(res == k){
8                return k;
9            }
10        }
11        return "";
12    }
13};