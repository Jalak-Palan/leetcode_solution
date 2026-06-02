// Last updated: 6/2/2026, 9:47:54 AM
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur=head;

        while(cur!=NULL && cur->next != NULL){
            if(cur->val == cur->next->val){
                cur->next = cur->next->next;
            }
            else{
                cur = cur -> next;
            }
        }
        return head;
    }
};