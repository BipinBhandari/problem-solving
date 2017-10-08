#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

bool isPrime(int n) {
  bool isPrime = true;
  if(n==2){
    return isPrime;
  } 
  for(int i=2; i<n/2 ; i++) {
     if(n%i==0){
      isPrime = false;
      break;
     }
  }
  return isPrime;
}


int minDistance(int a) {
  int  fact = 1, minDistance = 999999999;
  for(int i=2; i<a ; i++) {
  	if(a%i == 0  && isPrime(i)){
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
  int x = minDistance(13013);
  cout << x;
  return 0;
}
