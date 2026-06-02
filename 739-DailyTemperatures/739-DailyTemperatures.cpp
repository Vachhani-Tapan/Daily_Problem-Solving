// Last updated: 6/2/2026, 4:31:12 PM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temp) {
4        stack<int> stk;
5        vector<int> v1(temp.size() , 0);
6        for(int i = 0 ; i < temp.size() ; i++){
7            while(!stk.empty() && temp[i] > temp[stk.top()]){
8                int prevIdx = stk.top();
9                stk.pop();
10                v1[prevIdx] = i - prevIdx;
11            }
12            stk.push(i);
13        }
14        return v1;
15    }
16};