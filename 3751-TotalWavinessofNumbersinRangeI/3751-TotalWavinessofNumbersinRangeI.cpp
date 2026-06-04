// Last updated: 6/4/2026, 5:20:58 PM
1class Solution {
2public:
3    
4    int waviness(int num) {
5        
6        string s = to_string(num);
7        
8        int count = 0;
9        
10        for (int i = 1; i < s.size() - 1; i++) {
11            
12            if ((s[i] > s[i - 1] && s[i] > s[i + 1]) ||
13                (s[i] < s[i - 1] && s[i] < s[i + 1])) {
14                
15                count++;
16            }
17        }
18        
19        return count;
20    }
21    
22    int totalWaviness(int num1, int num2) {
23        
24        int ans = 0;
25        
26        for (int i = num1; i <= num2; i++) {
27            
28            ans += waviness(i);
29        }
30        
31        return ans;
32    }
33};