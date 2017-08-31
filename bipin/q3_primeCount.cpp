#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{

    if (n < 2){
        return false;
    }

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int primeCount(int start, int end)
{
    int count = 0;
    for (int i = start; i <= end; ++i)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int start = -10;
    int end = 6;
    int count = primeCount(start, end);
    cout << "Prime count is : " << count << endl;
}