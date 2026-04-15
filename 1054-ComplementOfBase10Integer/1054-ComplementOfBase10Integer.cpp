// Last updated: 4/15/2026, 10:48:33 AM
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        // convert n to binary format
        string bin = "";
        while(n){
            bin = char((n % 2) + '0') + bin;
            n = n / 2;
        }

        // flip the bits of that binary number
        for(int i = 0 ; i < bin.size() ; i++){
            if(bin[i] == '0'){
                bin[i] = '1';
            }
            else{
                bin[i] = '0';
            }
        }
        cout << bin << endl;

        // convert the final complement binary to base 10
        int ans = 0;
        int prod = 1;
        int i = bin.size() - 1;
        while(i > 0){
            if(bin[i] == '1'){
                ans += prod ;
            }
            prod = prod * 2;
            i--;
        }
        return ans;
    }
};