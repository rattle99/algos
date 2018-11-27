/*Program for bubble sort implementation in C++. */

#include "tool.h"

std::vector<int> counting_sort(std::vector<int> &A)
{
        std::vector<int> count;
        for(int i=0; i < 10; i++)
            count.push_back(0);

        for(int i:A)
            count[i]++;

        int k=0;

        for(int i=0; i < 10; i++)
            while(count[i]--)
                A[k++] = i;
        
        return A;
}

int main()
{
        std::vector<int> arr={1,5,2,4,6,5,8,7,9,0,0,0,0,3,2,1,5,6,4,5,2,3,5,5,5,8,9};
        std::cout<<"\n\nCurrent list : \n\n";
        print(arr);
        counting_sort(arr);
        std::cout<<"\n\nSorted list :\n\n";
        print(arr);
        return 0;
}
