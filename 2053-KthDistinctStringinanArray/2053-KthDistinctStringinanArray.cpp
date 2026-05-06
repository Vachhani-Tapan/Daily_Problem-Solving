// Last updated: 5/6/2026, 4:16:27 PM
1class Solution {
2public:
3    string kthDistinct(vector<string>& arr, int k) {
4        unordered_map<string, int> m1;
5        for (auto k : arr) {
6            m1[k]++;
7        }
8        int count = 0;
9        for (auto s : arr) {
10            if (m1[s] == 1) {
11                count++;
12                if (k == count) {
13                    return s;
14                }
15            }
16        }
17        return "";
18    }
19};