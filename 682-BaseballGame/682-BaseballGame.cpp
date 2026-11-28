// Last updated: 11/28/2026, 2:44:19 PM
1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4        vector<int>arr;
5
6        for(int i = 0;i<operations.size();i++){
7
8            if(operations[i]=="C"){
9                arr.pop_back();
10            }
11            else if(operations[i] == "D"){
12                int last = arr.back();
13                arr.push_back(last*2);
14            }
15            else if(operations[i] =="+"){
16                int last = arr.back();
17                int secondlast = arr[arr.size() - 2];
18
19                arr.push_back(secondlast + last);
20            }
21            else{
22                arr.push_back(stoi(operations[i]));
23            }
24        }
25        int sum = 0;
26        for(int i=0;i<arr.size();i++){
27            sum = sum + arr[i];
28        }
29
30        return sum;      
31    }
32};