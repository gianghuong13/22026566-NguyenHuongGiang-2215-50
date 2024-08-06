Node* insertTail(Node* head, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    if (head == NULL) return newNode;
    Node* tmp = head;
    while(tmp->next) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return head;
}