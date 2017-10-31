#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int maxDistance(int a) {
  int  maxDistance = -1, lastNumber = 0, firstNumber= 1; bool isFirstNumber = false;
  for(int i=2; i<=a/2 ; i++) {
  	if(a%i == 0 ){
      if(!isFirstNumber) {
        isFirstNumber = true;
        firstNumber = i;
        lastNumber = i;
      }
      else{
        lastNumber = i;
      }
  		
  	}
  }
  maxDistance = lastNumber - firstNumber;
  return maxDistance;
}
 

int main() 
{
  int x = maxDistance(8);
  cout << x;
  return 0;
}
