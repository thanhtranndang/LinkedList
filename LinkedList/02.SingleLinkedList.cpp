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



int main() {

	return 0;
}

/*
	Giải thích ý nghĩa của cấu trục node
	- Node ở đây có phần dữ liệu là một số nguyên lưu ở DATA, ngoài ra nó còn có 1 phần con trỏ trỏ tới chính struct node.
	Phần này chính là địa chỉ của ndoe tiếp theo theo của nó trong DSLK
	- Như vậy mỗi node sẽ có dữ liệu của nó và có địa chỉ node tiếp theo của nó. Đối với node cuối cùng trong DSLK thì phần địa chỉ này sẽ là con trỏ NULL
	- Các bạn cần nhớ rằng, mỗi node trong DSLK đều được cấp phát động

*/