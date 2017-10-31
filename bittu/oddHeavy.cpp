
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;


int oddHeavy(int a[ ], int len) {
  for(int i = 0; i < len; i++) {
  	 if(a[i]%2 != 0) {
  	 	for (int j=0; j<len; j++){
  	 		if(a[j]%2==0) {
  	 			if(a[i] < a[j])
  	 				return false;
  	 		}
  	 	}
  	 }
  }
  return true;
}
 

int main() 
{
  int a[] ={-2, -4, -6, -8, -11};
  int len = sizeof(a)/sizeof(*a);
  int x = oddHeavy(a , len);
  cout << x;
  return 0;
}
