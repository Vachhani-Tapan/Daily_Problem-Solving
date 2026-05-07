// Last updated: 5/7/2026, 10:32:26 AM
1class Solution {
2public:
3    int maximumNumberOfStringPairs(vector<string>& words) {
4        int count = 0;
5        unordered_map<string, int> m1;
6        for (auto k : words) {
7            string rev = k;
8            reverse(rev.begin() , rev.end());
9            if(m1[rev] > 0){
10                count++;
11                m1[rev]--;
12            }
13            else{
14                m1[k]++;
15            }
16        }
17        return count;
18    }
19};