// Last updated: 5/25/2026, 7:56:34 PM
1class Solution {
2public:
3    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
4        unordered_map<int , string> m1;
5        for(int i = 0 ; i < names.size() ; i++){
6            // Mary : 180 , John : 165 , Emma : 170
7            m1[heights[i]] = names[i];
8        }
9
10        // heights = [165 , 170 , 180]
11        sort(heights.begin() , heights.end());
12
13        // heights = [180 , 170 , 165]
14        reverse(heights.begin() , heights.end());
15
16        for(int i = 0 ; i < names.size() ; i++){
17            // names = ["Mary","John","Emma"]
18            names[i] = m1[heights[i]];
19        }
20        return names;
21    }
22};