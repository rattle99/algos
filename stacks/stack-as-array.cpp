#include <iostream>
#define MAX 20

int A[MAX];
int top = -1;

void push(int x)
{
	if (top < MAX - 1)
	{
		A[++top] = x;
	}
}

void pop()
{
	if (top >= 0) {
		top--;
	}
}

void show()
{
	for (int i = 0; i <= top; i++)
	{
		std::cout << A[i] << " | ";
	}
	std::cout << "\n\n";
}

int main()
{
	int i=5;
	while (i--) {
		push(i);
		show();
	}
	i = 5;
	while (i--) {
		pop();
		show();
	}
	return 0;
}
