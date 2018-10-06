#include<iostream>
#include<vector>

void print(std::vector<int> &A) {
      for(int i:A) std::cout<<i<<" ";
}

void swap(int &x, int &y) {
	   int temp=x;
	   x=y;
	   y=temp;
}
