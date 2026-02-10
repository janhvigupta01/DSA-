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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* c= new ListNode(-1);
        ListNode* temp1=c;
        ListNode* d= new ListNode(-1);
        ListNode* temp2=d;
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        int i=1;
        while(temp!=NULL && i<=size){
            
                if(i%2!=0){
                    temp1->next=temp;
                    temp1=temp1->next;
                }
                else{
                    temp2->next=temp;
                    temp2=temp2->next;
                }
                temp=temp->next;
                i++;
            
        }
        temp2->next = NULL;
        temp1->next=d->next;
        return c->next;
    }
};
