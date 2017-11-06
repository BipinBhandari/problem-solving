#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int isWave(int a[ ], int len) {
  bool isEven=false, isOdd=false;
  for(int i = 0; i < len; i++) {
    if(a[i]%2==0){
      if(isEven){
        return 0;
      }
      isEven=true;
      isOdd = false;
    }else{
      if(isOdd){
        return 0;
      }
      isOdd=true;
      isEven = false;
    }
  }
  return 1;
}
 

int main() 
{
  int a[] = {2,4,7};
  int len = sizeof(a)/sizeof(*a);
  int x = isWave(a , len);
  cout << x;
  return 0;
}
