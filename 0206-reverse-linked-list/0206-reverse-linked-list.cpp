
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        // using recursion 

        if(head==NULL || head->next==NULL) return head;

        ListNode* newHead = reverseList(head->next);

        head->next->next = head;
        head->next=NULL;

        return newHead;
  
    }
};