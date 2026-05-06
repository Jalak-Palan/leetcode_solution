// Last updated: 5/6/2026, 9:32:40 PM
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4        if(list1==NULL) return list2;
5        if(list2==NULL) return list1;
6
7        if(list1->val < list2->val){
8            list1->next = mergeTwoLists(list1->next,list2);
9            return list1;
10        }
11        else{
12            list2-> next = mergeTwoLists(list1,list2->next);
13            return list2;
14        }
15    }
16};