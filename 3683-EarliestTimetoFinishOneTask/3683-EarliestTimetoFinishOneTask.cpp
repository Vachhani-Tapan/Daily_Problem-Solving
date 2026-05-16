// Last updated: 5/16/2026, 11:45:03 AM
1class Solution {
2public:
3    int earliestTime(vector<vector<int>>& tasks) {
4        int time = INT_MAX;
5        for(int i = 0 ; i < tasks.size() ; i++){
6            int sum = 0;
7            for(int j = 0 ; j < tasks[i].size() ; j++){
8                sum += tasks[i][j];
9            }
10            time = min(time , sum);
11        }
12        return time;
13    }
14};