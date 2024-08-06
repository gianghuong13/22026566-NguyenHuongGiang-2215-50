Node* deleteSingle(Node* head) {
    if (head->value != head->next->value) {
        head = head->next;
        return head;
    }
    Node* tmp = head;
    while (tmp->next != NULL && tmp->next->next != NULL) {
        if(tmp->next->value != tmp->value && tmp->next->value != tmp->next->next->value) {
            tmp->next = tmp->next->next;
            return head;
        }
        tmp = tmp->next;
        
        //node co don dung cuoi, cho node truoc node co don tro vao null
        if (tmp->next->next == NULL) tmp->next = NULL;
    }
    return head;
}