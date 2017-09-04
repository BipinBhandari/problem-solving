#include <iostream>
#include <math.h>

using namespace std;

int getN(int len)
{
    for (int i = 0; i < len; ++i)
    {
        if (i * (i + 1) / 2 == len)
        {
            return i;
        }
    }

    return -1;
}

int sum(int a[], int from, int to)
{
    int sum = 0;
    for (int i = from; i <= to; ++i)
    {
        sum += a[i];
    }

    return sum;
}

int isMadhavArray(int a[], int len)
{
    int n = getN(len);

    if (n == -1)
    {
        return 0;
    }

    int latestSum = -1;
    int startIndex = 0;
    for (int i = 0; i < n; ++i)
    {
        int newSum = sum(a, startIndex, startIndex + i);

        if (latestSum != -1)
        {
            if (latestSum != newSum)
                return 0;
        }

        latestSum = newSum;
        startIndex = startIndex + (i + 1);
    }

    return 1;
}

int main()
{
    int arr[] = {3, 1, 2, 3, 0};

    int ans = isMadhavArray(arr, 15);
    cout << "Ans is : " << ans << endl;
}