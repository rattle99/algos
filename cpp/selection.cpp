/*Program for selection sort implementation in C++. */

#include <iostream>
#include <vector>

std::vector<int> selection_sort(std::vector<int> &A)
{
        std::cout<<"Current list : \n";
        for(int i=0;i<A.size();i++)
        {
                std::cout<<A[i]<<" ";
        }
        std::cout<<"\nSorted list : \n";

        for(int i=0;i<A.size()-1;i++)
        {
		int imin=i;
		for(int j=i+1;j<A.size();j++)
		{
			if(A[j]<A[imin])
				imin=j;
		}
		int temp=A[i];
		A[i]=A[imin];
		A[imin]=temp;
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
        selection_sort(arr);
        std::cout<<"\n\n\n";
        for(int i=0;i<arr.size();i++)
        {
                std::cout<<arr[i]<<" ";
        }
        return 0;
}

