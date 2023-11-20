#include <iostream>
#include <vector>
#include<list>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};



Node* makeNode(int x) {
	Node* newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}


void duyet(Node* head) {
	while (head != NULL)
	{
		cout << head->data;
		cout << " ";
		head = head->next;
	}
}

int size(Node* head) {
	int count = 0;
	Node* current = head;

	while (current != nullptr)
	{
		count++;
		current = current->next;
	}

	return count;
}

void pushFront(Node** head, int x) {
	Node* newNode = makeNode(x);
	newNode->next = (*head);
	(*head) = newNode;
}


void insertNode(Node** head, int k, int x) {
	int n = size(*head);
	if (k < 1 || k > n + 1) return;
	if (k == 1) {
		pushFront(head, x); return;
	}
	Node* temp = *head;

	for (int i = 0; i < k - 2; i++)
	{
		temp = temp->next;
	}

	Node* newNode = makeNode(x);
	newNode->next = temp->next;
	temp->next = newNode;
}

int main() {
	Node* head = NULL;
	for (int i = 0; i < 10; i++)
	{
		pushFront(&head, i);
	}
	int x, k;
	cout << " Nhap so can chen\n";
	cin >> k;
	cout << " Nhap vi tri can chen\n";
	cin >> x;
	insertNode(&head, x, k);
	duyet(head);
	return 0;
}

/*
	Bước 1. Duyệt tới node trước vị trí cần chèn gọi là node k -1;
	Bước 2. Cho phần next của node mới lưu node next của node k;
	Bước 3. Cho phần next của node k -1 lưu node mới


*/