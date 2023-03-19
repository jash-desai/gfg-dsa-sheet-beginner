int fractional_node(struct Node *head, int k){
    int n=0;
    struct Node* ptr = head;
    while(ptr){
        ptr = ptr->next;
        n++;
    }
    double x = ceil((double)n/k);
    x-=1;
    ptr = head;
    while(x--){
        ptr = ptr->next;
    }
    return ptr->data;
}