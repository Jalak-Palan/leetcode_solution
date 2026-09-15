// Last updated: 9/15/2026, 4:51:04 PM
1class Solution {
2public:
3    ListNode* removeNthFromEnd(ListNode* head, int n) {
4        int len = 0;
5        ListNode* temp = head;
6
7        while(temp!=NULL){
8            len++;
9            temp = temp->next;
10        }
11        if(n == len)
12        return head->next;
13
14        temp = head;
15
16        for(int i = 1;i<len-n;i++){
17            temp = temp->next;
18        }
19        temp->next = temp->next->next;
20        return head;
21    }
22};