// Last updated: 4/19/2026, 10:38:21 AM
1class Solution {
2public:
3    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
4        int i = 0;
5        int j = 0;
6        int ans = 0;
7        while(i < nums1.size() && j < nums2.size()){
8            if(i <= j && nums1[i] <= nums2[j]){
9                ans = max(ans , j - i);
10                j++;
11            }
12            else if(i <= j){
13                i++;
14            }
15            else{
16                j++;
17            }
18        }  
19        return ans;
20    }
21};