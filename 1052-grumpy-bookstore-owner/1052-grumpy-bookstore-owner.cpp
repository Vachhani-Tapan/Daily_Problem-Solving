class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int currUnsatisfied = 0;

        // count initial window answer
        for(int i = 0 ; i < minutes ; i++){
            currUnsatisfied += customers[i] * grumpy[i];
        }

        int maxUnsatisfied = currUnsatisfied;

        int i = 0;
        int j = minutes;
        int n = customers.size();

        // sliding window for fix size of minutes i sub and j add
        while(j < n){

            currUnsatisfied += customers[j] * grumpy[j];
            currUnsatisfied -= customers[i] * grumpy[i];

            maxUnsatisfied = max(maxUnsatisfied , currUnsatisfied);

            i++;
            j++;
        }

        int ext = 0;

        // add remaining customer who visit during grumpy[i] == 0 (satisfy) 
        for(int i = 0 ; i < n ; i++){
            if(grumpy[i] == 0){
                ext += customers[i];
            }
        }

        return maxUnsatisfied + ext;

    }
};