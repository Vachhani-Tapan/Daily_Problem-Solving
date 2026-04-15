// Last updated: 4/15/2026, 10:46:48 AM
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector <long long> v1;
        if(num % 3 == 0){
            v1.push_back(num / 3 - 1);
            v1.push_back(num / 3);
            v1.push_back(num / 3 + 1);
        }
        return v1;
    }
};