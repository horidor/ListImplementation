#include "listclass.h"

List::List() {
	head = new Node;
	head->next = nullptr;
	head->last = nullptr;

	current = head;

}

List::List(char insert) : List() {
	head->content = insert;
}


int List::length() {
	int count = 0;

	while (current->next != nullptr) {
		count++;
		current = current->next;
	}

	return count;
}



