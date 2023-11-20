#include <iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};

Node* makeNode(int x) {
	Node* newNode = new Node();
	// Node *newNode = (node*)malloc(sizeof(node)); ---- C
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}


void duyet(Node* head) {
	while (head != NULL)
	{
		cout << head->data;
		head = head->next;
	}
}

// Sử dụng rải tham chiếu
void pushNode(Node** head, int x) {
	Node* temp = *head;
	Node* newNode = makeNode(x);

	if (*head == NULL)
	{
		*head = newNode; return;
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	// Cho phần next của node temp -> newNode
	temp->next = newNode;
}

// Sử dụng tham chiếu
/*
void pushNode2(Node*& head, int x) {
	Node* temp = head;
	Node* newNode = makeNode(x);

	if (head == NULL)
	{
		head = newNode; return;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}

*/


int main() {

	Node* head = NULL;
	for (int i = 0; i < 10; i++)
	{
		pushNode(&head, i);
	}
	duyet(head);
	return 0;
}


/*
	"next" trỏ đến newNode
	B1. Duyệt từ dầu danh sách tới node cuối cùng thì dừng lại
	B2. Cho phàn next của node cuối trỏ vào node mới được thêm vào
*/