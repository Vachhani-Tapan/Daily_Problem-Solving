// Last updated: 4/23/2026, 5:48:40 PM
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int count = 0;
5        int answer = 0;
6        for(auto k : s){
7            if(k == 'L'){
8                count++;
9            }
10            else{
11                count--;
12            }
13            if(count == 0){
14                answer++;
15            }
16        }
17        return answer;
18    }
19};