class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for (int k = 1; k <= arr.size(); k += 2) {
            int i = 0;
            int j = 0;
            int windowSum = 0;
            while (j < arr.size()) {
                windowSum += arr[j];
                if (j - i + 1 == k) {
                    sum += windowSum;
                    windowSum -= arr[i];
                    i++;
                }
                j++;
            }
        }
        return sum;
    }
};