class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
       if(head==NULL)return head;
        if(x==1){
            head=head->next;
            return head;
        }
        Node* temp=head;
        
        for(int i=1;i<x-1;i++){
            temp=temp->next;
            
        }
        if(temp->next != NULL){
            temp->next=temp->next->next;
        }
        
        return head;
    }
};
