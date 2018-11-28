#include <iostream>

struct node {
	int data;
	node * next;
};

node *head;

void insertBeg(int x)
{
	node *temp = new node;
	temp->data = x;
	temp->next = head;
	head = temp;
}

void insert(int x, int n)
{
	node *temp = new node;
	temp->data = x;
	temp->next = NULL;
	if (n==1) {
		temp->next = head;
		head = temp;
		return;
	}
	node *temp2 = head;
	for (int i = 0; i < n-2; i++) {
		temp2 = temp2->next;
	}
	temp->next = temp2->next;
	temp2->next = temp;
}

void insertEnd(int x)
{
	node *temp = new node;
	temp->data = x;
	temp->next = NULL;

	node *temp2 = head;
	while (temp2->next != NULL) {
		temp2 = temp2->next;
	}
	temp2->next = temp;
}

void deleteNode(int n)
{
	node *temp = head;
	if (n==1) {
		head = temp->next;
		delete temp;
		return;
	}
	for (int i = 0; i < n-2; i++) {
		temp =  temp->next;
	}
	node *temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
}

void deleteEnd()
{
	node *temp = head;
	node *temp2 = new node;
	while (temp->next != NULL) {
		temp2 = temp;
		temp = temp->next;
	}
	delete temp;
	temp2->next = NULL;
}

void display()
{
	node *temp = head;
	std::cout << '\n';
	while(temp != NULL)
	{
		std::cout << temp->data << " | ";
		temp = temp->next;
	}
	std::cout << '\n';
}

int main()
{
	head = NULL;
	int i=8;
	while(i--)
	{
		insertBeg(i);
		insert(i+1,1);
		insert(i+10,3);
		display();
	}
	i=15;
	std::cout << "----------" << '\n';
	while (i--) {
		deleteNode(3);
		display();
	}
	i=5;
	while (i--) {
		insertEnd(i);
		display();
	}
	i=5;
	while (i--) {
		deleteEnd();
		display();
	}
	return 0;
}
