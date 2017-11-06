#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int minDistance(int a) {
  int  fact = 1, minDistance = 999999999;
  for(int i=2; i<=a ; i++) {
  	if(a%i == 0){
      int diff = i -fact;
      if(minDistance > diff){
        minDistance = diff;
      }
      fact = i;
    }
  }
  return minDistance;
}



 

int main() 
{
  int x = minDistance(13013);
  cout << x;
  return 0;
}
