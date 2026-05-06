// Last updated: 5/6/2026, 7:07:23 PM
1class Solution {
2public:
3    ListNode* middleNode(ListNode* head) {
4        int count = 0;
5
6        for(ListNode* temp = head; temp ; temp = temp->next){
7            count++;
8        }
9        int mid = count/2;
10
11        ListNode* curr = head;
12
13        for(int i=0; i < mid;i++){
14            curr = curr->next;
15        }
16        return curr;
17    }
18};
19