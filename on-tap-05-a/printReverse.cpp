void printReverse(Node* head, int k) {
    if (k == 0 || head == NULL) return;
    printReverse(head->next, --k);
    cout << head->value << " ";
}