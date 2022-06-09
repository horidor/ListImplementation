#pragma once

class List {
	private:
		struct Node {
			char content;
			Node* next;
			Node* last;
		};

		Node* head;
		Node* current;
	
	public:
		List();
		
		List(char insert);

		int length();

		

};