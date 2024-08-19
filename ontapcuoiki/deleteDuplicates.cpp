
Node* deleteDuplicates(Node* head) {
    int a[100] = {0};
    if (head == NULL) return NULL;
    Node* tmp = head;
    while (tmp->next != NULL) {
        if (a[tmp->next->value] == 1) {
            Node* deletedNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deletedNode;
        } else {
            a[tmp->next->value] = 1;
            tmp = tmp->next;
        }
    }
    return head;
}