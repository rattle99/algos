#include <iostream>
#define MAX 20

int A[MAX];
int front = -1;
int rear = -1;

bool isEmpty()
{
	return (front == -1 && rear == -1);
}

bool isFull()
{
	return ( (rear+1)%MAX == front );
}

void enqueue(int x)
{
	if (isFull()) {
		return;
	}
	if (isEmpty()) {
		front = rear = 0;
	}
	else
	{
		rear = (rear+1)%MAX;
	}
	A[rear] = x;
}

void dequeue()
{
	if (isEmpty()) {
		return;
	}
	else if (front == rear) {
		front = rear = -1;
	}
	else
	{
		front =  (front+1)%MAX;
	}
}

void show()
{
	int count = (rear - front + MAX)%MAX + 1;
	for (int i = 0; i < count; i++)
	{
		int index = (front + i)%MAX;
		std::cout << A[index] << " | ";
	}
	std::cout << "\n\n";
}

int main()
{
	int i=10;
	while (i--)
	{
		enqueue(i);
		show();
	}
	i=8;
	while (i--)
	{
		dequeue();
		show();
	}
	return 0;
}
