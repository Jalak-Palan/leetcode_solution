// Last updated: 5/9/2026, 5:11:29 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        ListNode* cur=head;
5
6        while(cur!=NULL && cur->next != NULL){
7            if(cur->val == cur->next->val){
8                cur->next = cur->next->next;
9            }
10            else{
11                cur = cur -> next;
12            }
13        }
14        return head;
15    }
16};