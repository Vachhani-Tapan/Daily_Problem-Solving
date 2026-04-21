// Last updated: 4/21/2026, 3:33:54 PM
1class Solution {
2public:
3    int revDig(int n){
4        int rev = 0;
5        while(n){
6            rev = (rev * 10) + (n % 10);
7            n /= 10;
8        }
9        return rev;
10    }
11    int countDistinctIntegers(vector<int>& nums) {
12        unordered_set<int> s1(nums.begin() , nums.end());
13        for(int i = 0 ; i < nums.size() ; i++){
14            s1.insert(revDig(nums[i]));
15        }
16        return s1.size();
17    }
18};