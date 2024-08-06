Node* insertHead(Node* head, int value) {
    Node* newnode = new Node();
    newnode->value = value;
    newnode->next = head;
    head = newnode;
    return head;
}