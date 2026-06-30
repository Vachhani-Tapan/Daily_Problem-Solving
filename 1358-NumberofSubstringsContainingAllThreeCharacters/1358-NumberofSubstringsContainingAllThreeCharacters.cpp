// Last updated: 6/30/2026, 5:59:56 PM
1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int i = 0;
5        int j = 0;
6        int n = s.size();
7        int ans = 0;
8        unordered_map<char,int> freq;
9        while(j < n){
10            freq[s[j]]++;
11            while(freq.size() == 3){
12                ans += n - j;
13                freq[s[i]]--;
14                if(freq[s[i]] == 0) freq.erase(s[i]);
15                i++;
16            }
17            j++;
18        }
19        return ans;
20    }
21};