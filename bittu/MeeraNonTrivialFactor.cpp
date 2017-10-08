#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int meeraArray(int a) {
  bool isMeera = false;int nonTrivialFactorCount = 0;
  for(int i = 2; i < a/2; i++) {
     if(a % i == 0)
        nonTrivialFactorCount++;
  }
  if(a % nonTrivialFactorCount == 0)
    isMeera = true;
  return isMeera;
}
 
int main() 
{
  int a = 6;
  int x = meeraArray(a);
  cout << x;
  return 0;
}
