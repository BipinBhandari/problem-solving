#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int isGuthrieSequence(int a){
  int prevNumber = 1;
  int nextNumber = 0;
  int k = 1;
  while(nextNumber < a) {
    nextNumber =  prevNumber +  (k-1);
    if(a==nextNumber)
      return true;
    prevNumber = nextNumber;
    k++;
  }
  return false;
}
 

int main() 
{
  int a= 18; 
  int x = isGuthrieSequence(a);
  cout << x;
  return 0;
}