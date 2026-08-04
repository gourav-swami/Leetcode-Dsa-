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
    ListNode* partition(ListNode* head, int x) {

        ListNode* low =new ListNode(100);
        ListNode* high =new ListNode(100);


        ListNode* tempLow = low;
        ListNode* tempHigh = high;


        ListNode* temp = head;


        while(temp!=NULL){

            if(temp->val<x){
                tempLow->next = temp;
                temp = temp->next;
                tempLow = tempLow->next;

            }

            else{

                tempHigh->next = temp;
                temp = temp->next;
                tempHigh = tempHigh->next;

            }
        }


        tempHigh->next=NULL;
        tempLow->next=NULL;

        tempLow->next=high->next;

        return low->next;

    }
};