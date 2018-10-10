#include <iostream>

struct node {
	int data;
	node *left;
	node *right;
};

node* newnode(int a) {
	node *newNode = new node;
	newNode->data = a;
	newNode->left = newNode->right = NULL;
	return newNode;
}

node* insert(node *root, int a) {
	if (root==NULL) {
		root = newnode(a);
	}
	else if (a <= root->data) {
		root->left = insert(root->left, a);
	}
	else {
		root->right = insert(root->right, a);
	}
	return root;
}

bool Search(node* root,int a) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == a) {
		return true;
	}
	else if(a <= root->data) {
		return Search(root->left,a);
	}
	else {
		return Search(root->right,a);
	}
}

int main() {
	node *root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 25);
	root = insert(root, 8);
	root = insert(root, 12);

	int number;
	std::cout<<"Enter number be searched\n";
	std::cin>>number;

	if(Search(root,number) == true) std::cout<<"Found\n";
	else
		std::cout<<"Not Found\n";
	return 0;
}
