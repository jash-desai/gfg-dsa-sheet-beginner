int GetNth(struct node* head, int k){
    struct node* ptr=head;
    k--;
    while(k--){
        ptr = ptr->next;
    }
    return ptr->data;
}