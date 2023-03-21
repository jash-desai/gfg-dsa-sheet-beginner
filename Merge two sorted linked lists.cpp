Node* reverseList(Node* head){
    if (head->next == NULL)
        return head;
    Node* rest = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}
Node* sortedMerge(Node* a, Node* b){
    a = reverseList(a);
    b = reverseList(b);
    Node* head = NULL;
    Node* temp;
    while (a != NULL && b != NULL) {
        if (a->data >= b->data) {
            temp = a->next;
            a->next = head;
            head = a;
            a = temp;
        }
        else {
            temp = b->next;
            b->next = head;
            head = b;
            b = temp;
        }
    }
    while (a != NULL) {
        temp = a->next;
        a->next = head;
        head = a;
        a = temp;
    }
    while (b != NULL) {
        temp = b->next;
        b->next = head;
        head = b;
        b = temp;
    }
    return head;
}