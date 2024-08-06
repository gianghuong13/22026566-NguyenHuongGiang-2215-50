Node* insert(Node* head, int value) {
    Node* tmp = head;
    Node* newNode = new Node();
    newNode->value = value;
    //ko co node nao
    if (head == NULL) return newNode;
    // co 1 node thi cho sap xep tang dan :)
    if (head->next == NULL) {
        if (value > head->value) {
            head->next = newNode;
            return head;
        } else {
            newNode->next = head;
            head = newNode;
            return head;
        }
    }
    // co 2 node tro len
    if (tmp->value < tmp->next->value) {  //day tang dan
        if (value < tmp->value) {
            newNode->next = head; 
            head = newNode;
            return head;
        }
        while (tmp->next != NULL && tmp->next->value < value) {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    } else {                              // day giam dan
        if (value > tmp->value) {
            newNode->next = head; 
            head = newNode;
            return head;
        }
        while (tmp->next != NULL && tmp->next->value > value) {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    return head;
}