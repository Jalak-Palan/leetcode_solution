// Last updated: 11/27/2026, 11:00:03 PM
1class Solution {
2public:
3    int minimumRecolors(string blocks, int k) {
4        int count = 0;
5        for(int i = 0;i<k;i++){
6            if(blocks[i]=='W'){
7                count++;
8            }
9        }
10        int mini = count;
11
12        for(int i = k;i<blocks.length();i++){
13            if(blocks[i-k]=='W'){
14                count--;
15            }
16            if(blocks[i]=='W'){
17                count++;
18            }
19
20            mini = min(mini, count);
21        }
22
23        return mini;
24    }
25};