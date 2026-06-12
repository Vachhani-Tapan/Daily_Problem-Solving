// Last updated: 6/12/2026, 9:57:40 PM
1class Solution {
2public:
3    bool isValid(string word) {
4        if(word.size() < 3) return false;
5
6        bool vowel = false;
7        bool consonant = false;
8
9        for(char k : word) {
10            if(isdigit(k)) {
11                continue;
12            }
13            else if(isalpha(k)) {
14                char c = tolower(k);
15
16                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
17                    vowel = true;
18                else
19                    consonant = true;
20            }
21            else {
22                return false;
23            }
24        }
25
26        return vowel && consonant;
27    }
28};