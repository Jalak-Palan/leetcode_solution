// Last updated: 6/24/2026, 10:44:14 AM
1class Solution {
2public:
3    int passThePillow(int n, int time) {
4
5        int person = 1;
6        int dir = 1;
7
8        while (time--) {
9
10            person += dir;
11
12            if (person == n || person == 1)
13                dir = -dir;
14        }
15
16        return person;
17    }
18};