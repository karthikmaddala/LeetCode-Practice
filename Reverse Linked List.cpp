class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head;
        ListNode *prev=NULL,*next=NULL;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;
       return head; 
    }
};
