#include <iostream>

struct node {
	int data;
	node * next;
	node * prev;
};

node *head;

void insertBeg(int x)
{
	node *temp = new node;
	temp->data = x;
	temp->prev = NULL;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
		return;
	}
	head->prev = temp;
	temp->next = head;
	head = temp;
}
/*
void insert(int x, int n)
{

}
*/
/*
void insertEnd(int x)
{

}
*/
/*
void deleteNode(int n)
{

}
*/
/*
void deleteEnd()
{

}
*/
/*
void display()
{

}
*/
int main()
{
	head = NULL;
	int i=3;
	while (i--) {
		insertBeg(i);
	}
	return 0;
}
