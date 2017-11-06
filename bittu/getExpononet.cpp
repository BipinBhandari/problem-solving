
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int getExponent(int n, int p) {
  int i = 0, largestExponent = 0;
  while(pow(p, i) <= n){
      int val = pow(p,i);
      if(n % val == 0){
        largestExponent = i;
      }
      i++;
  }
  return largestExponent;
}
 
int main() 
{
  
  int x = getExponent(28 , 3);
  cout << x;
  return 0;
}
