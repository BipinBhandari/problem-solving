#include <iostream>
#include <math.h>

using namespace std;

int nUpCount(int a[], int len, int n)
{
    int partialSum = 0;
    int count = 0;
    for (int i = 0; i < len; ++i)
    {
        int element = a[i];

        int newPartialSum = partialSum + element;

        if (partialSum <= n && newPartialSum > n)
        {
            count++;
        }

        partialSum = newPartialSum;
    }

    return count;
}

int main()
{
    int arr[] = {6, 3, 1};
    int upCount = nUpCount(arr, 3, 6);
    cout << "Upcount is : " << upCount << endl;
}