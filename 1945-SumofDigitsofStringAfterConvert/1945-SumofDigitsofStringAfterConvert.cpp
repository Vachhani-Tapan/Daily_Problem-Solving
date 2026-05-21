// Last updated: 5/21/2026, 7:33:53 PM
1class Solution {
2public:
3    int getLucky(string s, int k) {
4        // here we are not converting the string to the number because its not possible for converting that much string to int or not in long long
5        
6        string c = "";
7        for(auto k : s){
8            c += to_string(k - 'a' + 1);
9        }
10        // first transformation
11        int sum = 0;
12        for(auto k : c){
13            sum += k - '0';
14        }
15        k--;
16        while(k){
17            int temp = 0;
18            while(sum){
19                temp += sum % 10;
20                sum /= 10;
21            }
22            sum = temp;
23            k--;
24        }
25        return sum;
26    }
27};