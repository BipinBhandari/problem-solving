#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int minDistance(int a) {
  int  fact = 1, minDistance = 999999999;
  for(int i=2; i<a ; i++) {
  	if(a%i == 0 ){
  		int difference = i - fact;
  		if(difference < minDistance){
  			minDistance = difference; 
  			fact = i;
  		}
  	}
  }
  return minDistance;
}
 

int main() 
{
  int x = minDistance(1001);
  cout << x;
  return 0;
}
