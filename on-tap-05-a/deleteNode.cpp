Node* deleteNode(Node* head, int pos) {
    Node* tmp = head;
    if (pos == 0) {
        head = head->next;
        return head;
    }
    for (int i = 1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
    return head;
}