void print(Node* head) {
    while (head) {
        cout << head->value << " ";
        head = head->next;
    }
}