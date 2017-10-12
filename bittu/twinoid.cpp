#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int istwinoid(int a[ ], int len) {
  bool twinoid = false, firstEven = false;
  for(int i = 0; i < len; i++) {
    if(a[i]%2==0){
      if(firstEven) {
        if(a[i+1]%2!=0 ){
          twinoid = true;
        }
        else{
          firstEven = false;
        }
      }
      else{
        firstEven = true;
      }
    }
    else {
      firstEven = false;
    }
  }
  return twinoid;
}
 

int main() 
{
  int a[] = {3, 3, 2, 6, 7};
  int len = sizeof(a)/sizeof(*a);
  int x = istwinoid(a , len);
  cout << x;
  return 0;
}
