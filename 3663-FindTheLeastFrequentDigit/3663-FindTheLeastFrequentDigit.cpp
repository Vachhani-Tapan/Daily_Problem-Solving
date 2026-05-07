// Last updated: 5/7/2026, 4:12:04 PM
1class Solution {
2public:
3    int getLeastFrequentDigit(int n) {
4        unordered_map<int, int> m1;
5        while (n) {
6            int i = n % 10;
7            m1[i]++;
8            n /= 10;
9        }
10        int freq = INT_MAX;
11        int dig = INT_MAX;
12        for (auto k : m1) {
13            if (k.second < freq) {
14                freq = k.second;
15                dig = k.first;
16            }
17            else if(k.second == freq){
18                dig = min(dig, k.first);
19            }
20        }
21        return dig;
22    }
23};