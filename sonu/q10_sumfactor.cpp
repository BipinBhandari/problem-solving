#include <iostream>
#include<math.h>
using namespace std;

 int isCountSpecificNumber(int a[ ], int len, int n){
 	int count=0;
 	for(int i=0; i<len; i++){
 		if(a[i]==n){
 			count++;
 		}
 	}
 	return count;
 }

 int sumFactor(int a[ ], int len){
 	int sum = 0, sumRepCount=0;
 	for(int j=0; j<len; j++){
 		sum = sum + a[j];
 	}

 	sumRepCount = isCountSpecificNumber(a, len, sum);
 	
 	return sumRepCount;
 }



int main() 
{
  int result;		
  int a[] = {0, 0, 0}; 
  int len = sizeof(a)/sizeof(*a);
  result = sumFactor(a, len);
  cout << "Answer : "<< result;
  return 0;
}
