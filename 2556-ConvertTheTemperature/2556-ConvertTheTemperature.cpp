// Last updated: 4/15/2026, 10:46:05 AM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v1;
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32;
        v1.push_back(kelvin);
        v1.push_back(fahrenheit);
        return v1;
    }
};