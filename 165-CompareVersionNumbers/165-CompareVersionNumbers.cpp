// Last updated: 6/4/2026, 7:57:27 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int i = 0;
5        int j = 0;
6        while(i < version1.size() || j < version2.size()){
7            int n1 = 0;
8            int n2 = 0;
9
10            while(i < version1.size() && version1[i] != '.'){
11                n1 = n1 * 10 + (version1[i] - '0');
12                i++;
13            }
14            while(j < version2.size() && version2[j] != '.'){
15                n2 = n2 * 10 + (version2[j] - '0');
16                j++;
17            }
18            if(n1 > n2) return 1;
19            if(n1 < n2) return -1;
20            i++;
21            j++;
22        }
23        return 0;
24    }
25};