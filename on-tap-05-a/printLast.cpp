// void printLast(Node* head, int k) {
//     vector<int> a;
//     if (k==0) return;
//     while (head) {
//         a.push_back(head->value);
//         head = head->next;
//     }
//     for (int i = a.size() - k; i < (int)a.size(); i++) {
//         cout << a[i] << " ";
//     }
// }

void printLast(Node* head, int k) {
    if (head == NULL || k == 0) return;
    Node* first = head;
    Node* second = head;
    for (int i = 0; i < k; i++) {
        second=second->next;
    }
    while (second != NULL) {
        second = second->next;
        first = first->next;
    }
    while (first != NULL) {
        cout << first->value << " ";
        first = first->next;
    }
}    

/*
input
5
4 2 1 3 5
printLast(head,4);
result 
2 1 3 5
*/
