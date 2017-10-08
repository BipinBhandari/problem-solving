#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int hasKsmallFactor(int k, int n) {
  bool hasKsmallFactor = false; int u = 1, v=1;
  for(int i = 2; i < n/2; i++) {
     if(n%i == 0){
        if(i<k) {
          v = i;
        }
        if(u*v == n){
            hasKsmallFactor=true;
            break;
        }
        u=v;
     }
  }
  return hasKsmallFactor;
}
 

int main() 
{
  int x = hasKsmallFactor(10, 20);
  cout << x;
  return 0;
}
