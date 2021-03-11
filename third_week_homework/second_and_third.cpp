#include <iostream>

using namespace std;

struct Node {
	int val;
	Node* next;
};

struct LinkedList {
	Node* head = NULL, * end;

	void add(int val) {
		Node* node = new Node;
		node->val = val;
		node->next = NULL;
		if (head == NULL) {
			head = node;
			end = node;
		}
		else {
			end->next = node;
			end = node;
		}
	}

	int size() {
		int c = 0;
		Node* temp = head;
		while (temp != NULL) {
			temp = temp->next;
			c++;
		}
		return c;
	}

	int get(int ind) {
		int c = 0;
		Node* temp = head;
		while (c != ind) {
			if (temp == NULL) {
				throw 1;
			}
			temp = temp->next;
			c++;
		}
		return temp->val;
	}
};

int main() {
	LinkedList* list = new LinkedList;

	list->add(432);
	list->add(633);

	cout << list->size() << endl << list->get(1);
	return 0;
}