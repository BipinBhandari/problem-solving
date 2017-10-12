#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int isFib(int numToCheck, int twoPrev = 0, int prev = 1) {
    if (numToCheck == twoPrev || numToCheck == prev)
        return true;

    int currentFibNumber = twoPrev + prev;
    if (currentFibNumber == numToCheck)
        return true;
    else if (currentFibNumber > numToCheck)
        return false;

    return isFib(numToCheck, prev, currentFibNumber);
}

int main() 
{
  int a = 20;
  int x = isFib(a , 0, 1);
  cout << x;
  return 0;
}