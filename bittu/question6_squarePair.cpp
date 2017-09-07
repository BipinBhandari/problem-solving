#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int countSquarePairs(int a[ ], int len) {
  int perfectSquareCount = 0;
  if(len < 2) {
    return perfectSquareCount;
  }
  for(int i = 0; i < len; i++) {
    for(int j = 0 ; j < len; j++) {
       if(a[i] < a[j] && a[i] > 0 && a[j] > 0) {
         int sum = a[i] + a[j];
         float sqrtNum = sqrt(sum);
         float squareOfSqrt = pow(sqrtNum, 2);
         if(squareOfSqrt == sum) {
           perfectSquareCount++;
         }
       }
    }
  }
  return perfectSquareCount;
}

int main() 
{
  int result;   
  int a[] = {9, 0, 2, -5, 7};
  int len = sizeof(a)/sizeof(*a);
  int x = countSquarePairs(a, len);
  cout << x;
  return 0;
}