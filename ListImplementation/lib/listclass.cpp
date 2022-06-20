#include "listclass.h"
#include <stdexcept>

List::List() {
	head = new Node;
	head->next = nullptr;
	head->last = nullptr;

	current = head;

	current->content = '\0';

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

	if (this->current->content != '\0') count++;

	current = head;

	return count;
}

char List::get(int index){
	if (index < 0) throw std::logic_error("Error: incorrect argument passed");
	int count = 0;

	while (count!=index) {
		count++;
		current = current->next;
		if (current == nullptr) throw std::logic_error("Error: get index out of range");
	}

	return current->content;
}

void List::append(char insert) {
	
	while (current->next != nullptr){
		current = current->next;
	}

	current->next = new Node();

	Node* temp = current;
	current = current->next;

	current->last = temp;
	current->content = insert;

	current = head;
}


