/*Program for bubble sort implementation in C++. */

#include "tool.h"
#include <vector>

std::vector<float> counting_sort(std::vector<float> &A)
{
        std::vector<float> buckets[10];
        for (int i = 0; i < A.size(); i++)
        {
            int bucketIndex = 10*A[i];
            buckets[bucketIndex].push_back(A[i]);
        }

        for (int i = 0; i < 10; i++)
        {
            sort(buckets[i].begin(),buckets[i].end());
        }

        int k=0;
        for (int i = 0; i < 10; i++)
        {
            for (int j=0; j < buckets[i].size(); j++)
            {
                A[k++] = buckets[i][j];
            }
        }

        return A;
}

int main()
{
        std::vector<float> arr={0.12,0.45,0.78,0.98,0.18,0.37,0.82,0.43,0.49,0.73};
        std::cout<<"\n\nCurrent list : \n\n";
        print(arr);
        counting_sort(arr);
        std::cout<<"\n\nSorted list :\n\n";
        print(arr);
        return 0;
}
