#include <iostream>

struct node {
	int data;
	node * next;
};

class queue {
		node *front, *rear;
	public:
		queue() {
			front=rear=NULL;
		}
		void enqueue(int);
		void dequeue();
		void show();
};

void queue::enqueue(int a) {
	node *temp = new node;
	temp->data = a;
	temp->next = NULL;
	if(rear==NULL) {
		front = temp;
		rear = temp;
	}
	else {
		rear->next=temp;
		rear=temp;
	}
}

void queue::dequeue() {
	if (front!=NULL) {
		front=front->next;
	}
}

void queue::show() {
	node *temp = front;
	while(temp!=NULL) {
		std::cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main() {
	queue q;
	for (int i = 0; i < 10; i++) {
		q.enqueue(i);
	}
	std::cout<<"\n\n";
	q.show();
	std::cout<<"\n\n";
	for (int i = 0; i < 10; i+=2) {
		q.dequeue();
	}
	q.show();
	return 0;
}
