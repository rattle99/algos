/*Program for merge sort implementation in C++. */

#include <iostream>
#include <vector>

void mergeHalves(std::vector<int> &A, int leftStart, int mid, int rightEnd)
{
        std::vector<int> temp;
        int i=leftStart, k=i, j=mid+1;
        while (i <= mid && j <= rightEnd)
        {
                if(A[i] < A[j])
                	temp[k++] = A[i++];

                else
                	temp[k++] = A[j++];
        }

        while(i <= mid)
        {
                temp[k++] = A[i++];
        }
        while(j <= rightEnd)
        {
                temp[k++]  = A[j++];
        }
	
	for(int m=0;i<temp.size();i++)
        {
                A[m]=temp[m];
        }
}

void merge_sort(std::vector<int> &A, int leftStart, int rightEnd)
{/*
        std::cout<<"Current list : \n";
        for(int i=0;i<A.size();i++)
        {
                std::cout<<A[i]<<" ";
        }
*/
        if(leftStart>=rightEnd)
                return;

        int mid = (leftStart+rightEnd)/2;
        merge_sort(A,leftStart,mid);
        merge_sort(A,mid+1,rightEnd);

        mergeHalves(A, leftStart, mid, rightEnd);

/*
        std::cout<<"\nSorted list : \n";
        for(int i=0;i<A.size();i++)
        {
                std::cout<<A[i]<<" ";
        }
        return; */
}

int main()
{
        std::cout<<"\nTest\n";
        std::vector<int> arr={10,2,23,-4,235,56,2,6,5,5,5,23,-4,346,-56,-54};

        merge_sort(arr,0,arr.size()-1);

        std::cout<<"\n\n\n";
        for(int i=0;i<arr.size();i++)
        {
                std::cout<<arr[i]<<" ";
        }
        return 0;
}
