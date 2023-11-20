#include <iostream>
using namespace std;

//Cấu trúc một node của DSLK
struct Node
{
	int data;
	Node* next; // link
};

//typedef struct node node;

Node* makeNode(int x) {
	Node* newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

/*
	ở 2 hàm trên không làm thay đổi DSLK
*/
void printList(Node* head) {
	while (head != NULL)
	{
		cout << head->data;
		head = head->next;
	}
}

int count(Node* head) {
	int dem = 0;
	while (head != NULL) {
		++dem;
		head = head->next;
	}
	return dem;
}


void pushFront(Node** head, int x) {
	Node* newNode = makeNode(x);
	// B1. Phần next của newNode => head
	newNode->next = *head; // *head => địa chỉ của node head trong DSLK
	*head = newNode; // B2. Cập nhật node head => newNode
}
int main() {
	Node* head = NULL;
	for (int i = 1; i <= 5; i++)
	{
		pushFront(&head, i);
	}
	printList(head);
	return 0;
}

/*
	Thêm node vào đầu danh sách - newNode
	1. phần next của "newNode" trỏ vào node đầu tiên trong DSLK để nó lưu lại ( có nghĩa giờ nó lưu địa chỉ node đầu tiên của DSLK )
	2. Diu chuyển con trỏ head ra phần "data" của newNode


	Rải tham chiếu
	Trong DSLK đơn, có một con trỏ đầu danh sách(head) mà mỗi node trong danh sách đều trỏ trỏ đến node tiếp theo. Và khi chúng ta thay đổi con trỏ đầu dánh sách một các hiệu quả từ một hàm
	chúng ta sử dụng con trỏ trỏ đến con trỏ

*/