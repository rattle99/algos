/*Program for bubble sort implementation 
  in C++. */

#include <iostream>
#include <vector>

std::vector<int> bubble_sort(std::vector<int> A)
{	
	std::cout<<"Current list : \n";
	for(int i=0;i<A.size();i++)
	{
		std::cout<<A[i]<<" ";
	}
	std::cout<<"\nSorted list : \n";

	for(int i=0;i<A.size()-1;i++)
	{
		for(int j=0;j<A.size()-i-1;j++)
		{
			if(A[i]>A[i+1])
			{
				int temp=A[i+1];
				A[i+1]=A[i];
				A[i]=temp;
			}
		}
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
	bubble_sort(arr);
	std::cout<<"\n\n\n";
	for(int i=0;i<arr.size();i++)
        {
                std::cout<<arr[i]<<" ";
        }
	return 0;
}
