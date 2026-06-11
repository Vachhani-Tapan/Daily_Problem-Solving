// Last updated: 6/11/2026, 9:03:55 PM
1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector<string> res;
5        int j = 0;
6        for(int i = 1 ; i <= n && j < target.size() ; i++){
7            res.push_back("Push");
8            if(i == target[j]){
9                j++;
10            }
11            else{
12                res.push_back("Pop");
13            }
14        }
15        return res;
16    }
17};