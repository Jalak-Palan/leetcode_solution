// Last updated: 8/6/2026, 9:13:15 AM
1class Solution {
2public:
3    string tictactoe(vector<vector<int>>& moves) {
4
5        vector<int> row(3,0);
6        vector<int> col(3,0);
7
8        int diag = 0;
9        int antiDiag = 0;
10
11        for(int i=0;i<moves.size();i++){
12
13            int r = moves[i][0];
14            int c = moves[i][1];
15
16            int player;
17
18            if(i%2==0)
19                player = 1;
20            else
21                player = -1;
22
23            row[r] += player;
24            col[c] += player;
25
26            if(r==c)
27                diag += player;
28
29            if(r+c==2)
30                antiDiag += player;
31
32            if(abs(row[r])==3 ||
33               abs(col[c])==3 ||
34               abs(diag)==3 ||
35               abs(antiDiag)==3){
36
37                if(player==1)
38                    return "A";
39                else
40                    return "B";
41            }
42        }
43
44        if(moves.size()==9)
45            return "Draw";
46
47        return "Pending";
48    }
49};