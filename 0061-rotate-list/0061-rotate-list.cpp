/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* tail = head;

        int n=0;


        while( temp!=NULL){

            n++;

            if(temp->next==NULL){
                tail=temp;
            }
            temp=temp->next;
            
        }


        if(n==0) return NULL;

        if(k>=n){

            k=k%n;
        }

        temp = head;


        for(int i=1;i<=n-k-1;i++){
            temp = temp->next;
        }

        tail->next=head;
        head=temp->next;
        temp->next=NULL;

        return head;

        
    }
};