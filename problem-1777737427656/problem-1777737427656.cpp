// Last updated: 5/2/2026, 9:27:07 PM
1class Solution {
2public:
3    bool halvesAreAlike(string s) {
4        int half = s.size() / 2;
5        string a = s.substr(0 , half);
6        string b = s.substr(half,s.size());
7        int vowela = 0;
8        int vowelb = 0;
9        for(auto k : a){
10            k = tolower(k);
11            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
12                vowela++;
13            }
14        }
15        for(auto k : b){
16            k = tolower(k);
17            if(k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u'){
18                vowelb++;
19            }
20        }
21        return vowela == vowelb;
22    }
23};