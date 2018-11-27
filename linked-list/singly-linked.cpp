#include <iostream>

struct node {
	int data;
	node * next;
};

node *head;

void insert(int n)
{
	node *temp = new node;
	temp->data = n;
	temp->next = head;
	head = temp;
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
		insert(i);
		display();
	}
	return 0;
}
