Node* insert(Node* head, Node* newNode) {
    //chen vao dau
    if (head == NULL || head->getValue() > newNode->getValue()) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* tmp = head;
        while (tmp->next != NULL && tmp->next->getValue() < newNode->getValue()) {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    return head;
}
Node* sort(Node* head) {
    Node* tmp = NULL;
    Node* toInsertNode = head;
    Node* behind_toInsertNode = NULL;
    
    while (toInsertNode != NULL) {
        behind_toInsertNode = toInsertNode->next;
        tmp = insert(tmp, toInsertNode);
        toInsertNode = behind_toInsertNode;
    }
    return tmp;
}