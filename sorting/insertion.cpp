/*Program for insertion sort implementation in C++. */

#include <iostream>
#include <vector>

std::vector<int> insertion_sort(std::vector<int> &A)
{
        std::cout<<"Current list : \n";
        for(int i=0;i<A.size();i++)
        {
                std::cout<<A[i]<<" ";
        }
        std::cout<<"\nSorted list : \n";

        for(int i=1;i<A.size();i++)
        {
		int val=A[i];
		int hole=i;
		while(hole>0 && A[hole-1]>val)
		{
			A[hole]=A[hole-1];
			hole--;
		}
		A[hole]=val;
        }

        for(int i=0;i<A.size();i++)
        {
                std::cout<<A[i]<<" ";
        }
        return A;
}

int main()
{
        std::cout<<"\nTest\n";
        std::vector<int> arr={10,2,23,-4,235,56,2,6,5,5,5,23,-4,346,-56,-54};
        insertion_sort(arr);
        std::cout<<"\n\n\n";
        for(int i=0;i<arr.size();i++)
        {
                std::cout<<arr[i]<<" ";
        }
        return 0;
}
