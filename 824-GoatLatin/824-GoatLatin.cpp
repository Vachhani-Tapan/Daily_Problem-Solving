// Last updated: 6/24/2026, 5:25:33 PM
1class Solution {
2public:
3
4    bool isVowel(char c) {
5        c = tolower(c);
6        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
7    }
8
9    string toGoatLatin(string s) {
10        string res = "";
11        vector<string> v1;
12        for (int i = 0; i < s.size(); i++) {
13            string word = "";
14            while (s[i] != ' ' && i != s.size()) {
15                word += s[i];
16                i++;
17            }
18            if(isVowel(word[0])){
19                word += "ma";
20            }
21            else{
22                word += word[0];
23                word.erase(0,1);
24                word += "ma";
25            }
26            int n = v1.size() + 1;
27            word.append(n , 'a');
28            v1.push_back(word);
29        }
30        for(auto k : v1){
31            res += k;
32            res += ' ';
33        }
34        res.pop_back();
35        return res;
36    }
37};