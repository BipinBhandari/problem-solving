
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int mode(int a[ ], int len) {
  for(int i = 0; i < len; i++) {
    if(a[i]%2 == 0){
      
    }

  }	 
  return true;
}
 

int main() 
{
  int a[] ={17, 6, 2, 4};
  int len = sizeof(a)/sizeof(*a);
  int x = mode(a , len);
  cout << x;
  return 0;
}
