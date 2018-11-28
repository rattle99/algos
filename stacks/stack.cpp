#include <iostream>

struct node {
	int data;
	node *next;
};

class stack {
	node *top;
	public:
	stack() {
		top=NULL;
	}
	void push(int);
	void pop();
	void show();
};

void stack::push(int a) {
	node *temp=new node;
	temp->data=a;
	temp->next=NULL;
	if(top!=NULL) {
		temp->next=top;
	}
	top=temp;
}

void stack::pop() {
	if(top!=NULL) {
		top=top->next;
	}
}

void stack::show() {
	node *temp=top;
	while (temp!=NULL) {
		std::cout << temp->data << " ";
		temp=temp->next;
	}
}

int main() {
	stack s;
	for (int i = 0; i < 10; i++) {
		s.push(i);
	}
	std::cout<<"\n\n";
	s.show();
	std::cout<<"\n\n";
	for (int i = 0; i < 10; i+=2) {
		s.pop();
	}
	s.show();
	return 0;
}
