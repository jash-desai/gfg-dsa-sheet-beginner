class Solution{
    public:
    struct Node* reverseList(struct Node *head){
        Node* curr=head;
        Node* prev=NULL;
        Node* nxtt=curr->next;
        while(curr){
            nxtt = curr->next;
            curr->next = prev;
            prev=curr;
            curr = nxtt;
        }
        return prev;
    }
};