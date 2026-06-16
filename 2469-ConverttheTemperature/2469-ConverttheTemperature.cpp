// Last updated: 6/16/2026, 1:59:12 PM
1class Solution {
2public:
3    vector<double> convertTemperature(double celsius) {
4
5        double kelvin = celsius + 273.15;
6
7        double fahrenheit = celsius * 1.80 + 32.00;
8
9        return {kelvin, fahrenheit};
10    }
11};