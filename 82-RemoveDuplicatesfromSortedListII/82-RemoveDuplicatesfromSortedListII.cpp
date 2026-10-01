// Last updated: 10/1/2026, 3:40:14 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4
5        if(head==NULL){
6            return NULL;
7        }
8
9        ListNode * i = head;
10        ListNode * j = head->next;
11        ListNode * dummy = new ListNode();
12        ListNode * temp = dummy;
13
14
15        while(j != NULL){
16            if(i->val == j->val){
17                j = j->next;
18            }else{
19                if(i->val == i->next->val){
20                    i = j;
21                    j = j->next;
22                }else{
23                    dummy->next = i;
24                    i = i->next;
25                    j = j->next;
26                    dummy = dummy->next;
27                }
28            }
29        }
30        if(i->next == NULL){
31            dummy->next = i;
32            dummy = dummy->next;
33        }
34        dummy->next = NULL;
35        return temp->next;
36        }
37};