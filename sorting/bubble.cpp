/*Program for bubble sort implementation in C++. */

#include "tool.h"

std::vector<int> bubble_sort(std::vector<int> &A)
{
        std::cout<<"Current list : \n";
        print(A);

        for(int i=0;i<A.size()-1;i++)
        {
                for(int j=0;j<A.size()-i-1;j++)
                {
                        if(A[j]>A[j+1])
                        {
				swap(A[j],A[j+1]);
                        }
                }
        }

	std::cout<<"\nSorted list :\n";
	print(A);
        return A;
}

int main()
{
        std::vector<int> arr={10,2,23,-4,235,56,2,6,5,5,5,23,-4,346,-56,-54};
        bubble_sort(arr);
        std::cout<<"\n\n\n";
	print(arr);
        return 0;
}
