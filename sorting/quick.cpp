/*Program for quick sort implementation in C++. */

#include "tool.h"

int partition(std::vector<int> &A, int start, int end)
{
			int temp;
			int pivot = A[end];
			int partitionIndex = start; // set partition index as start initially
			for(int i=start; i<end; i++)
			{
						if(A[i] <= pivot)
									swap(A[i],A[partitionIndex++]);
			}
			swap(A[partitionIndex],A[end]);
					//	Swap pivot element
					//	eith element at
					//	partition index
			return partitionIndex;
}

std::vector<int> quick_sort(std::vector<int> &A, int start, int end)
{
			if(start<end)
			{
				int partitionIndex = partition(A,start,end);
				quick_sort(A,start,partitionIndex-1);
				quick_sort(A,partitionIndex+1, end);
			}
			return A;
}

int main()
{
        std::cout<<"\nTest\n";
        std::vector<int> arr={10,2,23,-4,235,56,2,6,5,5,5,23,-4,346,-56,81,43,654,435,-54};
        quick_sort(arr, 0, arr.size()-1);
        std::cout<<"\n\n\n";
        print(arr);
        return 0;
}
