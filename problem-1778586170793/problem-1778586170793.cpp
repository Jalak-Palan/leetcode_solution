// Last updated: 5/12/2026, 5:12:50 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        long first = LONG_MIN;
5        long second = LONG_MIN;
6        long third = LONG_MIN;
7
8        for(int num : nums){
9            if(num == first || num == second || num == third){
10                continue;
11            }
12            if(num > first){
13                third = second;
14                second = first;
15                first = num;
16            }
17            else if(num > second){
18                third = second;
19                second = num;
20            }
21            else if(num > third){
22                third = num;
23            }
24        }
25        if(third == LONG_MIN){
26            return first;
27        }
28        return third;
29
30    }
31};