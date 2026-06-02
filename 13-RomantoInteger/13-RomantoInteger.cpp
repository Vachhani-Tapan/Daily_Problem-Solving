// Last updated: 6/2/2026, 4:27:43 PM
1class Solution {
2public:
3    int romanToInt(string s) {
4        int ans = 0;
5        unordered_map<string, int> m1 = {
6            {"I", 1},
7            {"V", 5},
8            {"X", 10},
9            {"L", 50},
10            {"C", 100},
11            {"D", 500},
12            {"M", 1000},
13            {"IV", 4},
14            {"IX", 9},
15            {"XL", 40},
16            {"XC", 90},
17            {"CD", 400},
18            {"CM", 900}
19        };
20        for(int i = 0 ; i < s.size() ; i++){
21            if(i + 1 < s.size()){
22                string grp = "";
23                grp += s[i];
24                grp += s[i + 1];
25                if(m1.count(grp)){
26                    ans += m1[grp];
27                    i++;
28                    // continue to skip that two particular char sum to get add in the final answer
29                    continue;
30                }
31            }
32            string s1 = "";
33            s1 += s[i];
34            ans += m1[s1];
35        }
36        return ans;
37    }
38};