#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int countDigit(int a, int n) {
  int  countDigit = 0;
  while(a > 0 ) {
  	int rem = a%10;
  	if(rem == n)
  		countDigit++;
  	a = a/10;
  }
  return countDigit;
}
 

int main() 
{
  int x = countDigit(112223223, 2);
  cout << x;
  return 0;
}
