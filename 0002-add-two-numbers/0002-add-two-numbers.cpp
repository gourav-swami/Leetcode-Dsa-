
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry =0;


        ListNode* dummy = new ListNode(100);
        ListNode* curr = dummy;

        while(t1 != NULL || t2 != NULL){

            int sum = carry;

            if(t1 != NULL) sum=sum+t1->val;
            if(t2 != NULL) sum=sum+t2->val;

            ListNode* NewNode = new ListNode(sum%10);
            carry = sum/10;
            if(t1 != NULL) t1 = t1->next;
            if(t2 != NULL) t2 = t2->next;

            curr->next = NewNode ;
            curr = curr->next;
        }

        if(carry){
             ListNode* NewNode = new ListNode(carry);
             curr->next = NewNode ;
        }

        return dummy->next;   
    }
};