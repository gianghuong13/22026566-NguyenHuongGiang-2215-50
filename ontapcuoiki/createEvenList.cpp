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
    LinkedList* createEvenList();
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
LinkedList* LinkedList::createEvenList() {
	
	if (head == NULL) return NULL;
	LinkedList* newList = new LinkedList();
	Node* tmp = head;
	int position = 1;
	
	while (tmp != NULL) {
		if (position % 2 == 0) {
			if (newList->head == NULL) {
				newList->head = tmp;
				newList->tail = tmp;
			} else {
				newList->tail->next = tmp;
				newList->tail = tmp;
			}
			
		}
		position++;
		tmp = tmp->next;
	} 
	if (newList->tail != NULL) {
		newList->tail->next = NULL;
	}
	return newList;
}
int main() {
	LinkedList list;  //50 40 30 20 10
	list.push(10);    //40 20
//	list.push(20);
//	list.push(30);
//	list.push(40);
//	list.push(50);
//	list.push(60);
//	list.deleteEvenNodes();
	LinkedList* newList = list.createEvenList();
	newList->print();
//	list.print();
	return 0;
}
