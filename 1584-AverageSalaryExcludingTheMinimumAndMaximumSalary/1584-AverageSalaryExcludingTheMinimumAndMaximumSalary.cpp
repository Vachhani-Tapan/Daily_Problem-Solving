// Last updated: 4/15/2026, 10:48:02 AM
class Solution {
public:
    double average(vector<int>& salary) {
        int max1 = *max_element(salary.begin() , salary.end());
        int min1 = *min_element(salary.begin() , salary.end());
        int sum = 0;
        for(int i = 0 ; i < salary.size() ; i++){
            sum += salary[i];
        }
        return (double)(sum - min1 - max1) / (salary.size() - 2);
    }
};