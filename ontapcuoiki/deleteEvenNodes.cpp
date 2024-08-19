#include<bits/stdc++.h>
using namespace std;
struct Node {
	Node* next;
	int data;
};
struct LinkedList {
	Node* head, *tail;
	LinkedList (){
		head = NULL;
		tail = NULL;
	}
	void deleteEvenNodes();
	void print() {
		Node* tmp = head;
		while (tmp != NULL) {
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
	}
	void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL) {
        	head = tail = newNode;
		} else {
			newNode->next = head;
        	head = newNode;
		}
    }
};
void LinkedList::deleteEvenNodes() {
	if (head == NULL) return;
	
	Node* tmp = head;
	Node* prev = NULL;
	int position = 1;
	
	while (tmp != NULL) {
		if (position % 2 == 1) {
			prev = tmp;
			tmp = tmp->next;
		} else {
			prev->next = tmp->next;
			if (tmp == tail) {
				tail = prev;
			}
			delete tmp;
			tmp = prev->next;
		}
		position++;
	}
	
}
int main() {
	LinkedList list;
	list.push(10);
//	list.push(20);
//	list.push(30);
//	list.push(40);
//	list.push(50);
	list.deleteEvenNodes();
	list.print();
	return 0;
}
