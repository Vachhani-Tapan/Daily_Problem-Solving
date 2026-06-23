// Last updated: 6/23/2026, 10:26:43 AM
class Solution {
public:
    int getLucky(string s, int k) {
        // here we are not converting the string to the number because its not possible for converting that much string to int or not in long long
        
        string c = "";
        for(auto k : s){
            c += to_string(k - 'a' + 1);
        }
        // first transformation
        int sum = 0;
        for(auto k : c){
            sum += k - '0';
        }
        k--;
        while(k){
            int temp = 0;
            while(sum){
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp;
            k--;
        }
        return sum;
    }
};