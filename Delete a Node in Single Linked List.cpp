Node* deleteNode(Node *head, int x){
    if(x>2){
        x-=2;
        Node* ptr = head;
        while(x--){
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
        return head;
    }else if(x<2){
        head = head->next;
        return head;
    }else{
        head->next = head->next->next;
        return head;
    }
}