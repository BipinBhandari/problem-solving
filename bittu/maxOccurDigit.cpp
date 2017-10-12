#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int maxOccurDigit(int a) {
  int  factorTwoCount = 0, count = 0 , tempCount = 0;;
  while(a  >  0 ) {
    int rem = a % 10;
    if(digit == rem){
    	tempCount++;
    	count = 
    }
    digit = rem;
    a = a / 10;
  }
  return factorTwoCount;
}
 

int main() 
{
  int x = maxOccurDigit(2453343);
  cout << x;
  return 0;
}
