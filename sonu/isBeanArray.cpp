#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int isBean(int a[ ], int len) {
  bool isNine=false, isSeven=false, isThirteen=false, isSixteen=false;
  for(int i = 0; i < len; i++) {
    if(a[i]==9){
      isNine = true;
    }
    if(a[i]==13){
      isThirteen = true;
    }
    if(a[i]==7){
      isSeven = true;
    }
    if(a[i]==16){
      isSixteen = true;
    }
  }
  if(((isNine==true) && (isThirteen==false)) || ((isSeven==true) && (isSixteen==true))){
      return 0;
    }
  return 1;
}
 

int main() 
{
  int a[] = {1,2,3,4,10,11,12};
  int len = sizeof(a)/sizeof(*a);
  int x = isBean(a , len);
  cout << x;
  return 0;
}
