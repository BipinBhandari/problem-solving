
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int getEvenHighestNumber(int a[], int len){
  int greatestEvenNumber = a[0];
  for(int i = 1; i < len; i++) {
    if(a[i] > greatestEvenNumber && a[i]%2 == 0){
      greatestEvenNumber = a[i];
    }
  }
  return greatestEvenNumber;
}

int isComplete(int a[ ], int len) {
  int greatestEvenNumber = getEvenHighestNumber(a, len);
  for(int j = 2; j < greatestEvenNumber; j++) {
    int containLess = false;
    for(int i = 0; i < len; i++) {
      if(a[i] < 1){
        return false;
      }
      if(a[i] == j && a[i] %2 == 0){
        containLess = true;
      }
    }
    if(!containLess)
      return false;
  }
  return true;
}
 

int main() 
{
  int a[] ={-2, -4, -6, -8, -11};
  int len = sizeof(a)/sizeof(*a);
  int x = isComplete(a , len);
  cout << x;
  return 0;
}
