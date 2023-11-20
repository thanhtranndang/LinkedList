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
	cout << endl;
}

// Kích thước của DSLK
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

// thêm Node vào đầu DSLK
void pushFront(Node** head, int x) {
	Node* newNode = makeNode(x);
	// B1. Phần next của newNode => head
	newNode->next = *head; // *head => địa chỉ của node head trong DSLK
	*head = newNode; // B2. Cập nhật node head => newNode
}

// xóa Node đầu DSLK
void popFront(Node** head) {
	if (*head == NULL) return;
	Node* temp = *head; // Giai phong
	*head = (*head)->next;
	delete temp;
}

// xóa Node cuối DSLK
void popBack(Node** head) {
	if (*head == NULL) return;
		Node * temp = *head;
		if (temp->next == NULL) {
			*head = NULL;
			delete temp;
			return;
		}
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}

		Node* last = temp->next;
		temp->next = NULL;
		delete last;
}

// xóa Node giữa DSLK
void Erase(Node** head, int k) {
	int n = size(*head);
	if (k < 1 || k > n) return; // Khong xoa
	if (k == 1) popFront(head);
	else
	{
		Node* temp = *head;
		for (int i = 0; i < k -2; i++)
		{
			temp = temp->next;
		}
		// Temp: k-1
		Node* kth = temp->next; // Node thu k
		temp->next = kth->next;
		delete	kth;
	}
}

// search Node trong DSLK
bool search(Node** head, int value) {
	Node* current = *head;
	while (current != nullptr)
	{
		if (current->data == value) {
			return 1;
		}
		current = current->next;
	}
		return	0;
}
int main() {
	Node* head = NULL;
	for (int i = 0; i < 10; i++)	{
		pushFront(&head, i);
	}
	duyet(head);

	int value = 11;
	if (search(&head, value))
	{
		cout << " Ton tai";
	}
	else {
		cout << "Khong ton tai";
	}


	return 0;
}


/*
	--------------Xóa Node đầu dnah sách--------------
	Bước 1. Cho Node head lưu Node thứ 2 hiện tại trong DSLK
	Bước 2. Giải phóng Node đầu tiên trong DSLK

	--------------Xóa Node cuối danh sách--------------
	Bước 1. Tìm tới Node thứ 2 từ cuối về gọi là temp
	Bước 2. Cho phần Next của Node temp trỏ vào NULL
	Bước 3. Giải phóng Node cuối cùng tong DSLK
	--------------Xóa Node giữa danh sách--------------
*/