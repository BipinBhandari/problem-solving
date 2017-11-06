#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int pascal(int a) {
  int sum = 0, i=0;
  while(sum <= a) {
    sum += i;
    if(sum == a){
      return true;
    }
    i++;
  }
  return false;
}
 

int main() 
{
  int x = pascal(15);
  cout << x;
  return 0;
}
