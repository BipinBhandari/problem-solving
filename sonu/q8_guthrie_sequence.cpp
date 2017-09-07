#include <iostream>
#include<math.h>
using namespace std;

 int isGuthrieSequence(int a[ ], int len){
 	int n;
 	if(a[len-1] != 1){
 		return 0;
 	}

 	for(int i=0; i<len; i++){
 		if(a[i]%2==0){
 			n = a[i]/2;
 		}else{
 			n = (a[i]*3) + 1;
 		}
 		if(n != a[i+1] && i!=len-1){
 			return 0;
 		}
 	}
 	return 1;
 }


int main() 
{
  int result;		
  int a[] = {8, 4, 2, 1}; 
  int len = sizeof(a)/sizeof(*a);
  result = isGuthrieSequence(a, len);
  cout << "Answer : "<< result;
  return 0;
}
