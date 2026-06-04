// Last updated: 6/4/2026, 8:19:17 PM
1class Solution {
2public:
3    string decodeString(string s) {
4        int i = 0;
5        return decode(s, i);
6    }
7
8    string decode(string &s, int &i) {
9        string result = "";
10
11        while (i < s.size() && s[i] != ']') {
12
13            // If character is alphabet
14            if (isalpha(s[i])) {
15                result += s[i];
16                i++;
17            }
18
19            // If character is digit
20            else if (isdigit(s[i])) {
21
22                int num = 0;
23
24                // Build the complete number
25                while (i < s.size() && isdigit(s[i])) {
26                    num = num * 10 + (s[i] - '0');
27                    i++;
28                }
29
30                // Skip '['
31                i++;
32
33                // Decode the substring inside brackets
34                string decoded = decode(s, i);
35
36                // Skip ']'
37                i++;
38
39                // Repeat decoded string num times
40                while (num--) {
41                    result += decoded;
42                }
43            }
44        }
45        return result;
46    }
47};