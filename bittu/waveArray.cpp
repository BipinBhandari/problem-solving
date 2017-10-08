#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int waveArray(int a[ ], int len) {
  bool isEven = false,isOdd = false, waveArray = true;
  for(int i = 0; i < len; i++) {
    if(a[i]%2 == 0){
      isOdd = false;
      if(isEven){
        waveArray = false;
        break;
      }
      isEven = true;
    }
    if(a[i]%2 != 0) {
      isEven = false;
      if(isOdd){
        waveArray = false;
        break;
      }
      isOdd = true;
    }
  }
  return waveArray;
}
 

int main() 
{
  int a[] =  {2, 6, 3, 4};
  int len = sizeof(a)/sizeof(*a);
  int x = waveArray(a , len);
  cout << x;
  return 0;
}
