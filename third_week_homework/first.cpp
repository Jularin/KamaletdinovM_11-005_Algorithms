#include <iostream>

using namespace std;

struct Node {
	int item;
	Node* next = 0;
};

struct Stack {
	Node* ptrHead = nullptr;

	void push(int item) {
		Node* node = new Node;
		node->item = item;
		node->next = ptrHead;
		ptrHead = node;
	}

	int pop() {
		if (!ptrHead)
			throw 1;
		Node* temp = ptrHead;
		int x = temp->item;
		ptrHead = temp->next;
		delete temp;
		return x;
	}

	int peek() {
		if (!ptrHead)
			throw 1;
		return ptrHead->item;
	}

	void printAll() {
		if (!ptrHead)
			throw 1;
		Node* next = ptrHead;
		while (next) {
			cout << next->item;
			next = next->next;
		}
	}

};

int main() {
	Stack* stack = new Stack;
	for (int i = 0; i < 5; i++) {
		stack->push(i + 1);
	}

	stack->printAll();
	return 0;
	return 0;
}