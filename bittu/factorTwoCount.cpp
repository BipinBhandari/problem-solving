#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int factorTwoCount(int a) {
  int  factorTwoCount = 0;
  while(a % 2 == 0 ) {
    factorTwoCount++;
    a = a / 2;
  }
  return factorTwoCount;
}
 

int main() 
{
  int x = factorTwoCount(24);
  cout << x;
  return 0;
}
