#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int riley(int a) {
  int  factorTwoCount = 0;
  while(a>0){
  	int rem = a%10;
  	if(rem % 2 != 0)
  		return false;
  	a= a/10;
  }
  return true;
}
 

int main() 
{
  int x = riley(3224);
  cout << x;
  return 0;
}
