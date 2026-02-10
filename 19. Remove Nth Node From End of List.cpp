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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head==NULL) return head;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int idx=count-n;
       if(idx==0){
            head=head->next;
            return head;
       }
       temp=head;
       for(int i=0;i<idx-1;i++){
            temp=temp->next;
            
        }
        if(temp->next != NULL){
            temp->next=temp->next->next;
        }
        return head;
    }
};
