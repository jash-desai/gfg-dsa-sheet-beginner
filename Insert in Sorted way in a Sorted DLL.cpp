Node* sortedInsert(Node *head, int x){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL){
        head = temp;
        return head;
    }
    if (temp->data <= head->data){
        temp->next = head;
        head->prev = temp;
        head = temp;
        return head;
    }
    Node* curr = head;
    while (curr->next != NULL){
        if (temp->data <= curr->data){   
            curr->prev->next = temp;
            temp->prev = curr->prev;
            temp->next = curr;
            curr->prev = temp;
            return head;
        }
        curr = curr->next;
    }
    if (temp->data <= curr->data){
        curr->prev->next = temp;
        temp->prev = curr->prev;
        temp->next = curr;
        curr->prev = temp;
        return head;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}