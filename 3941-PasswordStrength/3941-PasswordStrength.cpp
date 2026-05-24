// Last updated: 5/24/2026, 8:39:40 PM
1class Solution {
2public:
3    int passwordStrength(string password) {
4        int point = 0;
5        vector<bool> seen(256 , false);
6        for(auto chr : password){
7            if(!seen[chr]){
8                seen[chr] = true;
9
10                if (chr >= 'a' && chr <= 'z') {
11                    point += 1;
12                } else if (chr >= 'A' && chr <= 'Z') {
13                    point += 2;
14                } else if (chr >= '0' && chr <= '9') {
15                    point += 3;
16                } else {
17                    point += 5;
18                }
19            }
20        }
21        return point;
22    }
23};